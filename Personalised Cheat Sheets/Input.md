# Input

This topic is very minimal as there is not much that goes on with it from what I've understood.

There are two main methods to get user input, `cin` and `gets()`. From what I've seen, `gets()` is not recommended as it does not have protection over a buffer overflow if a string exceeds a certain length.

## cin
```cpp
int x; // define variable with no value.. we get it soon

cout << "Enter a value for x: ";
cin >> x;
cout << x; // returns the value that the user inputted. it must be an int.
```

## gets() - deprecated since 2014
```cpp
char string_limit[100];
cout << "Enter a string (limit: 100 chars): ";
gets(string_limit);
cout << "You have entered: " << string_limit;
```