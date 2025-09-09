#include <stdio.h>

// Q8: What happens if we name a variable same as a function name?
int main()
{
    int printf = 99; // Shadowing printf locally
    // Can't use printf() anymore, so let's use puts instead
    char buffer[100];
    sprintf(buffer, "Q8 Answer: printf variable (shadowed) = %d", printf);
    puts(buffer);
    return 0;
}
