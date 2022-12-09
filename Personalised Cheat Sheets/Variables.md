# Variables in C++

Like in a lotta programming languages, there are a lot of different data-types. C++ is no different. 

Unlike in programming languages such as the infamous [Python](https:://python.org) you have to explicitly define the variables per data-type - they are as follows:
- [`int`](#int) - holds integers including whole numbers... not including decimals. Example: `123` or `-456`
- [`double`](#double) - holds float numbers - i.e., decimal numbers. Example:  `15.48` or `3.1415926`
- [`char`](#char) - holds a single character, can be capital or non-capital. Example: `A` or `b`
- [`string`](#string) - holds text... this one should be easy enough. Example: `"Hello Variables.md!"`
- [`bool`](#bool) - holds one of two values with each state being either true or false. Example: `"No" - true` 

## Examples of each data-type

Each example here shows the absolute basic syntax on each data-type that exists. I will **not** include the full C++ code as I assume you already know the absolute basic syntax. If not, I suggest you do so.

### int
```cpp
int age = 19;
cout << age;
```

### double
```cpp
double age_in_decimal = 19.27;
cout << age_in_decimal;
```

### char
```cpp
char first_letter = 'I';
cout << first_letter;
```

### string
```cpp
#include <string.h> // not too sure if this is needed or not.

std::string name = "Inf3xt";
cout << name;
```

### bool
```cpp
bool console_is_bad = true;
cout << console_is_bad;
```

## Sidenote

When printing out different data-types, you can also concatenate them together with other things. 
Example as one whole code block:
```cpp
int x = 10;
cout << "The value of x is: " << x;

double y = 10.1654;
cout << "The value of y is: " << y;

char literal_x = 'X';
cout << "The value of literal_x is: " << literal_x;

std::string name = "Inf3xt";
cout << "The value of name is: " << name;

bool isAwesome = true;
cout << "isAwesome is: " << isAwesome;
```

### Double sidenote... const

In most programming languages, there is a way to protect variables from changing their value at any point during the execution of the program. The wonders of `const` come into play now!

```cpp
const std::string name = "Inf3xt"; // value set.
cout << name; // Inf3xt

name = "Not Inf3xt"; // error: assignment of read-only variable 'name'
cout << name; // Program dies and does not reach this! :(
```
