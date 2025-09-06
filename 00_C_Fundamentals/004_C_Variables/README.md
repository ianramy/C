# C Variables

---

A **variable** in C is a named piece of memory which is used to store data and access it whenever required. It allows us to use the memory without having to memorize the exact memory address.

To create a variable in C, we have to specify a **name** and the **type of data** it is going to store in the syntax.

```c
data_type name;
```

C provides different data types that can store almost all kinds of data. For example, int, char, float, double, etc.

```c
int num;
char letter;
float decimal;
```

In C, every variable must be declared before it is used. We can also declare multiple variables of same data type in a single statement by separating them using comma as shown:

```c
data_type name1, name2, name3, ...;
```

---

## Rules for Naming Variables in C

We can assign any name to a C variable as long as it follows the following rules:

- A variable name **must only contain letters, digits, and underscores**.
- It **must start with an alphabet or an underscore only**. It cannot start with a digit.
- No white space is allowed within the variable name.
- A variable name **must not be any reserved** word or keyword.
- The name **must be unique** in the program.

---

## C Variable Initialization

Once the variable is declared, we can store useful values in it. The first value we store is called initial value and the process is called Initialization. It is done using assignment operator (=).

```c
int num;
num = 3;
```

It is important to initialize a variable because a C variable only contains garbage value when it is declared. We can also initialize a variable along with declaration.

```c
int num = 3;
```

**Note**: It is compulsory that the values assigned to the variables should be of the same data type as specified in the declaration.

---

## Accessing Variables

The data stored inside a C variable can be easily accessed by using the variable's name.

**Example**:

```c
#include <stdio.h>
​
int main() {
    
    // Create integer variable
    int num = 3;
    
    // Access the value stored in
    // variable
    printf("%d", num);
    return 0;
}
```

**Output**:

```bash
3
```

---

## Changing Stored Values

We can also update the value of a variable with a new value whenever needed by using the assignment operator =.

**Example**:

```c
#include <stdio.h>
​
int main() {
    
    // Create integer variable
    int n = 3;
    
    // Change the stored data
    n = 22;
    
    // Access the value stored in
    // variable
    printf("%d", n);
    return 0;
}
```

**Output**:

```bash
22
```

---

## How to use variables in C?

Variables act as name for memory locations that stores some value. It is valid to use the variable wherever it is valid to use its value. It means that a variable name can be used anywhere as a substitute in place of the value it stores.

**Example**: An integer variable can be used in a mathematical expression in place of numeric values.

```c
#include <stdio.h>
int main() {
    
    // Expression that uses values
    int sum1 = 20 + 40;
    
    // Defining variables
    int a = 20, b = 40;
    
    // Expression that uses variables
    int sum2 = a + b;
    
    printf("%d\n%d", sum1, sum2);
    return 0;
}
```

**Output**:

```bash
60
60
```

---

## Memory Allocation of C Variables

When a variable is declared, the compiler is told that the variable with the given name and type exists in the program. But no memory is allocated to it yet. Memory is allocated when the variable is defined.

Most programming languages like C generally declare and define a variable in the single step. For example, in the above part where we create a variable, variable is declared and defined in a single statement.

The size of memory assigned for variables depends on the type of variable. We can check the size of the variables using sizeof operator.

**Example**:

```c
#include <stdio.h>
​
int main() {
    int num = 22;
    
    // Finding size of num
    printf("%d bytes", sizeof(num));
    return 0;
}
```

**Output**:

```bash
4 bytes
```

Variables are also stored in different parts of the memory based on their storage classes.

---

## Scope of Variables in C

We have told that a variable can be accessed anywhere once it is declared, but it is partially true. A variable can be accessed using its name anywhere in a specific region of the program called its scope. It is the region of the program where the name assigned to the variable is valid.

A scope is generally the area inside the {} curly braces.

Example:

```c
// num cannot be accessed here

int main() {

    // num cannot be accessed here
    {
        // Variable declaration
        int num;
    }
    
    // Cannot be accessed here either
    return 0;
}
```

---

## Constants in C

C also provides some variables whose value cannot be changed. These variables are called constants and are created simply by prefixing const keyword in variable declaration.

Syntax:

```c
const data_type name = value;
```

Constants must be initialized at the time of declaration.

---
