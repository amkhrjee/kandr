We generally use the term _parameter_ for a variable named in the parenthesized list in a function definition, and _argument_ for the value used in a call of the function.

The terms _formal argument_ and _actual argument_ are used for the same distinction. 

When the name of an argument is used as an argument, the value passed to the function is the location or address of the beginning of the array - there is no copying of array elements. 

# Static Variables 
The `static` declaration can also be applied to internal variables.
Internal `static` variables are local to a particular function just as automatic variables are, but unlike automatics, they remain inexistence rather than coming and going each time the function is activated. 

This means that internal `static` variables provide _private, permanent storage_ within a single function. 
