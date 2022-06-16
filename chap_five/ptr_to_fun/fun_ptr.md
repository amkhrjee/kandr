# Functions Pointers
Fun ptrs in C are extremely helpful but they are confusing because of their strange syntax.
 
 We use the right-left rule while reading fun ptr declarations. 

 For example, 
 ```c
 int *(*foo)(int, int, int);
 ```
 Here we first find the identifier: `foo`
 
 Then, we look left, we find `*`, we realize it's a pointer
 
 Then, we come out of the parens and look right, we figure out that it's a function that takes 3 `int`s as inputs. 

 Then, we look to the left and realize it returns an integer pointer

 Yeah I know it's confusing. Thanks David Ritchie. 

 So, to sum up: 
 
 > `foo` is a pointer to a function that takes three `int`s and returns an `int *`
