# Pointer declarations
The declaration of the pointer ip as `int *ip` is intended as a mnemonic; it says 
that the expression `*ip` is an `int`. The syntax of he declaration for a variable 
mimics the expression in which the variable might appear. The reasoning applies to 
dunction declarations as well. For example,

```c
double *dp, atof(char *);
```

 says that in an expression `*dp` and `atof(s)` have values of the type 
`double`, and that argument of `atof` is a pointer to `char`.

# Pointers and Arrays 
By definition, the value of a variable or expression of type array is the address of element zero of the array. 

```c
//So basically 
int arr[LIMIT]={/*some values*/};
//'arr' actually represents &arr[0]
```
*_THIS IS IMPORTANT_*

In other words,
`Name of an array = location of the initial element`

Rather more surprising, at first sight, is the fact that a reference to `a[i]` can be written as `*(a+i)`. 

There is one difference between an array name and a pointer that must be kept in mind. A pointer is a variable, so `pa=a` and `pa++` are legal. But an array name is not a variable; constructions like `a=pa` and `a++` are illegal.

As formal parameters in a function definition, `char s[]` and `char *s` basically imply the same thing, the latter is more preferred as it explicitly states that s is a pointer. 

It is possible to pass part of an array to a function, by passing a pointer to the beginning of the subarray. 
