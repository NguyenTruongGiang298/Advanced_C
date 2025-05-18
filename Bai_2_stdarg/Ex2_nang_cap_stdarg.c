#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

#define SUM(...) tong(__VA_ARGS__,"abb")

void tong(int count, ...)
{
    va_list args;
    va_list check;
    va_start(args,count);
    va_copy(check,args); //(DESTINATION, FROM ..)
    
    int result = count;
    while(va_arg(check,char*)!="abb")
    {
        result+=va_arg(args,int);
    }

    printf("ket qua la: %d\n",result);
    va_end(check);
}

int main(void)
{
    SUM(1,2,3,4,5,6,7,8,9,10);
    return 0;
}