# Conditions

In each programming language, there should be some sort of conditional shit in it. They usually come in the form of the infamous `if else` statements. C++ is no exception. Here's the thing, you know the operators in one language, they will move to the other easily - they are the same... one or two differences.

## if
If statements are to specify if a statement is true/false then to evaluate the code from said statement. It's a lot simpler than it sounds... here is an example:
```cpp
int x = 10;

if (x == 10) {
	cout << "X is 10!";
}
```
The good thing about learning C++ if statements, they follow the same syntax in other languages, including the short-hand one-liner -> the wonderful world of [ternary expressions](#Ternary-Expressions).

Now there are also if-else statements and on top of that, else if's too!

## if-else
If-else is the same as normal if statements only exception is that if the statement is not met, the following code in the else block will be executed instead. Again, probably better with an example:
```cpp
int x = 10;

if (x == 11) {
	cout << "This will not execute!";
} else {
	cout << "But this will!";
}
```

## if-else if-else
If-else if-else is the same as the top two except it will make another check before moving straight towards the else block. Example time:
```cpp
int x = 10;

if (x == 100) {
	cout << "X is 100!";
} else if (x == 10) {
	cout << "X is 10!";
} else {
	cout << "X doesn't seem to be 10 or 100!"
}

```

## Ternary Expressions
Now this can look a bit complex to an untrained eye. Trust me, I'd know. Take the first example of the if statement, we can change it so it is now a ternary expression and it will all fit on one line.
```cpp
int x = 10;

string awesomeness = (x == 10) ? "X is 10!" : "X is not 10!";
cout << awesomeness; // will print: X is 10!
```

### Ternary Breakdown
I know as much as the next person that they would like to know the language behind this and learning how it works - I'm here to tell you as such!

1. `string awesomeness` - it needs a variable straight away to help you define the expression.
2. `(x == 10)` - this is the condition - note it is the same as the first if statement's condition.
3. `?` - this shows it has logic in it... What else could it be for?
4. `X is 10!` - this is what is displayed if the logic is true in step 2.
5. `X is not 10!` - this is what is displayed if the logic is false in step 2.

See that wasn't so hard was it?
A key note to remember though, the truthful statement is on the left **BEFORE** the colon (:).

## Switch

We are here finally! After all that information we have made it to the switch statements!
Switch statements are fancier if-else if-else statements.

