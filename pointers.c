#pointer is a variable which stores the memory address of another variable.
#include <stdio.h>

int main() {
    int x = 4;
    int *ptr = &x;
    printf("%d\n", x); 
    printf("%d", *ptr);
    return 0;
}
