We generally use the term _parameter_ for a variable named in the parenthesized list in a function definition, and _argument_ for the value used in a call of the function.

The terms _formal argument_ and _actual argument_ are used for the same distinction. 

When the name of an argument is used as an argument, the value passed to the function is the location or address of the beginning of the array - there is no copying of array elements. 

# Static Variables 
The `static` declaration can also be applied to internal variables.
Internal `static` variables are local to a particular function just as automatic variables are, but unlike automatics, they remain inexistence rather than coming and going each time the function is activated. 

This means that internal `static` variables provide _private, permanent storage_ within a single function. 

# Null Pointers
In C, two null pointers of any type are guaranteed to be equal to each other. A null pointer doesn't point to any valid object and is guaranteed to be not equal to any other non-null pointer. 

The preprocessor macro NULL is defined as an implementation-defined null pointer constant which in C99 can be portably expressed as ((void * )0) which means that the integer value 0 converted to the type void * (pointer to void). The C standard does not say that the null pointer is the same as the pointer to memory address 0, though that may be the case in practice. Dereferencing a null pointer is undefined behavior in C, and a conforming implementation is allowed to assume that any pointer that is dereferenced is not null.
