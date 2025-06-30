#include <stdio.h>
#include <setjmp.h>
#include <stdint.h>
#include <string.h>
jmp_buf env;
int8_t exception;
char error_code[100]; 
char c[100];                   
#define THROW(x,c)                          \
        do{                                 \
        strcpy(error_code,c);               \
        longjmp(env,x);                     \
        }while(0);       

#define TRY if((exception = setjmp(env))==0)
#define CATCH(x) if(exception ==x)

double divide(int a, int b)
{
    if(a==0 && b==0) THROW(1,"khong hop ly");
    if(b==0 && a!=0) THROW(2,"chia cho 0");
    return (double)a/b;
}
int main(void )
{
    int a=0;
    int b=0;
    TRY
    {
        printf("gia tri la: %f\n", divide(a,b));
    }
    CATCH(1)
    {
        printf("%s\n", error_code);
    }
    CATCH(2)
    {
        printf("%s\n", error_code);
    }
    return 0;
}


