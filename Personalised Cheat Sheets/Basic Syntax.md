The absolute basic syntax for making any C++ program.

```cpp
#include <iostream>

int main(int argc, char* argv[]) {
	std::cout << "Basic Syntax" << std::endl;	
	return 0;
}
```

Notice here, I don't have the infamous `using namespace std;` line on line 2/3. Suprise, you can actually write a file without it.. it just means you have to add more to the standard functions. After all, `std` does mean standard ;).

```cpp
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	cout << "Basic Syntax V2" << endl;
	return 0; 
```

### Sidenote
The arguments in the main function are for cross compatibility when running the current C++ file as a normal C file ([source](https://github.com/hazzaaclark)).

## Breakdown

1. `#include <iostream>` is the header file that includes ;) the input and output files... `cout` and `cin`.
2. `using namespace std;` means we can use names and objects from the standard library `namespace std;`.
3. `int main(int argc, char* argv[])` is the main function that needs to be in every C++ program. Functions in C++ start with a data-type variable (`int, string, bool etc...`).
	1. Side note: `int argc, char* argv[]` is used for cross compatibility. [See here.](#sidenote)
4. Anything in the function {} will be executed and evaluated according to how its written. Quite easy to know :D.
5. `cout` (see-out) is a function that allows you to print out text to the console. In any example, it will either print out `Basic Syntax` or `Basic Syntax V2`.
6. `<<` is the insertion operator... not in that way ;). It makes one object do something with another one.
7. `return 0;` ends the main function from running.  
8. It should come with no shock that when running most programming languages, they incorporate the handy dandy semi-colons `;` and well they are required in this language. 

