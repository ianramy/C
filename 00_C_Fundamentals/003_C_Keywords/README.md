# Keywords in C

Keywords are predefined or reserved words that have special meanings to the compiler. These are part of the syntax and cannot be used as identifiers in the program. A list of keywords in C or reserved words in the C programming language are mentioned below:

| auto     | break    | case     | char      |
|----------|----------|----------|-----------|
| const    | continue | default  | do        |
| double   | else     | enum     | extern    |
| float    | for      | goto     | if        |
| int      | long     | register | return    |
| short    | signed   | sizeof   | static    |
| struct   | switch   | typedef  | union     |
| unsigned | void     | volatile | while     |

We cannot use these keywords as identifiers (such as variable names, function names, or struct names). The compiler will throw an error if we try to do so.

## Example

```c
#include <stdio.h>

int main() {
    int float = 5.0;  // Error: 'float' is a keyword
    printf("%d\n", float);
    return 0;
}
```

**Output:**

```bash
./Solution.c: In function 'main':
./Solution.c:4:9: error: expected identifier or '(' before 'return'
     int return = 10;   
         ^
./Solution.c:5:20: error: expected expression before 'return'
     printf("%d\n", return);
                    ^
```

Let's categorize all keywords based on context for a more clear understanding.

| Category              | Keywords                                                                 |
|------------------------|--------------------------------------------------------------------------|
| Data Type Keywords     | char, int, float, double, void, short, long, signed, unsigned            |
| Operator & Utility Keywords | sizeof, return, goto, typedef                                        |
| Control Flow Keywords  | if, else, switch, case, default, for, while, do, break, continue         |
| Storage Class Keywords | auto, register, static, extern                                           |
| Type Qualifiers        | const, volatile                                                          |
| User Defined Types     | struct, union, enum                                                      |

## Difference Between Keywords and Identifiers

| Keywords                                                                 | Identifiers                                      |
|--------------------------------------------------------------------------|-------------------------------------------------|
| Reserved words in C that have a specific meaning and use in the syntax.  | Names given to variables, functions, structs, etc. |
| Cannot be used as variable names.                                        | Can be used as variable names (if not a keyword). |
| Examples: int, return, if, while                                         | Examples: x, total, count                        |
| Part of the C language grammar.                                          | User-defined, meaningful names in the code.      |
| Cannot be redefined or repurposed.                                       | Can be defined, redefined, and reused as needed. |
