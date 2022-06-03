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

