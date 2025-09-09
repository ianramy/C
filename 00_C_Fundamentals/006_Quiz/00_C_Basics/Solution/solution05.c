#include <stdio.h>

// Q5: Can we use special characters like @, $, % in identifiers?
int main()
{
    // int my$var = 10;   // INVALID
    int my_var = 10;
    printf("Q5 Answer: my_var = %d\n", my_var);
    return 0;
}
