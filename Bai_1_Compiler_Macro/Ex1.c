#include <stdio.h>

#define STRINGSIZE(x) #x 
/* #x thay the cho "x" */ 

int main(void)
{
    printf("%s\n", STRINGSIZE(CONCHAOBAME)); // "hello"
    return 0;
}