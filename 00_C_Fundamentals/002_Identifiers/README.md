# C Identifiers

In C programming, identifiers are the names used to identify variables, functions, arrays, structures, or any other user-defined items. It is a name that uniquely identifies a program element and can be used to refer to it later in the program.

Example:

```c
// Creating a variable
int val = 10;

// Creating a function
void func() {}
```

In the above code snippet, `val` and `func` are identifiers.

## Rules for Naming Identifiers in C

A programmer must follow a set of rules to create an identifier in C:

Identifier can contain following characters:

- Uppercase (A-Z) and lowercase (a-z) alphabets.
- Numeric digits (0-9).
- Underscore (_).
- The first character of an identifier must be a letter or an underscore.
- Identifiers are case-sensitive.
- Identifiers cannot be keywords in C (such as int, return, if, while etc.).

Example
The following code examples demonstrate the creation and usage of identifiers in C:

Creating an Identifier for a Variable

```c
#include <stdio.h>
​
int main() {
      
      // Creating an integer variable and
      // assign it the identifier 'var'
      int var;
  
      // Assigning value to the variable
      // using assigned name
      var = 10;
  
      // Referring to same variable using 
      // assigned name
      printf("%d", var);
      
      return 0;
}
```

Output

```bash
10
```

If you are not familiar with variables and functions, don’t worry! We will discuss them in the later sections.

Creating an Identifier for a Function

```c
#include <stdio.h>
​
// Function declaration which contains user
// defined identifier as it name
int sum(int a, int b) {
    return a + b;
}
​
int main() {
​
    // Calling the function using its name
    printf("%d", sum(10, 20));
    return 0;
}
```

Output

```bash
30
```

## Naming Conventions

In C programming, naming conventions are not strict rules but are commonly followed suggestions by the programming community for identifiers to improve readability and understanding of code. Below are some conventions that are commonly used:

**For Variables**:

- Use camelCase for variable names (e.g., frequencyCount, personName).
- Constants can use UPPER_SNAKE_CASE (e.g., MAX_SIZE, PI).
- Start variable names with a lowercase letter.
- Use descriptive and meaningful names.

**For Functions**:

- Use camelCase for function names (e.g., getName(), countFrequency()).
- Function names should generally be verbs or verb phrases that describe the action.

**For Structures**:

- Use PascalCase for structure names (e.g., Car, Person).
- Structure names should be nouns or noun phrases.

## Keywords vs Identifiers

Here’s a table that highlights the differences between keywords and identifiers in C:

| Feature            | Keyword                                                                                      | Identifier                                                                                 |
|---------------------|----------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------|
| Definition          | A keyword is a reserved word with a special meaning in C that cannot be used as an identifier. | An identifier is a user-defined name used to refer to variables, functions, arrays, etc.   |
| Usage               | Keywords are predefined in the C language and are used to define the structure and control flow of the program (e.g., int, if, while). | Identifiers are used by programmers to name variables, functions, and other user-defined elements (e.g., age, sum, main). |
| Example             | int, return, for, if, while                                                                 | totalAmount, studentAge, calculateTotal                                                   |
| Modification        | Keywords cannot be modified or used for any other purpose.                                   | Identifiers can be created and used as per the programmer’s needs.                        |
| Position in Code    | Keywords are part of the syntax of C and are used to structure the program.                  | Identifiers are used for variable names, function names, and more throughout the code.     |
| Case Sensitivity    | Keywords are case-sensitive (e.g., int and Int are different).                               | Identifiers are also case-sensitive (e.g., age and Age are different).                     |

### What happens if we use a keyword as an Identifier in C?

In the below code, we have used const as an identifier which is a keyword in C. This will result in an error in the output.

```c
#include <stdio.h>
​
int main() {
    
    // used keyword as an identifier
    int const = 90;
  
    return 0;
}
```

Output

```bash
​./Solution.c: In function 'main':
./Solution.c:5:14: error: expected identifier or '(' before '=' token
    int const = 90;
              ^
```
