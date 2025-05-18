#include <stdio.h>

/* variadic macro*/

#define sum(...)                                    \
int arr[]= {__VA_ARGS__};                           \
int result=0;                                       \
for(int i=0; i<sizeof(arr)/sizeof(arr[0]);i++)      \
{                                                   \
    result += arr[i];                               \
}                                                   \
printf("%d",result);


int main(void)
{
     sum(1,2,3,4,5);
   
    return 0;
}