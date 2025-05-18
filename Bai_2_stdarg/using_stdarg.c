#include <stdio.h>
#include <stdarg.h>

void sum(int count, ...)
{
    va_list args;
    va_start(args, count);
    
    printf("%d, ", va_arg(args,int));
    printf("%d, ", va_arg(args,int));
    printf("%s, ", va_arg(args,char*));
    printf("%d, ", va_arg(args,int));
    printf("%d", va_arg(args,int));
    va_end(args);
}


int main(void)
{
    sum(5,1,2,"hello world",0x1A,4);
    return 0;
}