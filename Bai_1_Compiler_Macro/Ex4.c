#include <stdio.h>

/* variadic macro p2*/

#define PRINT_MENU(number,item)     printf("%d. %s\n",number,item); 
#define MENU(...)                                                   \
do{                                                                 \
const char *option[]= {__VA_ARGS__};                                \
for(int i=0; i<sizeof(option)/sizeof(option[0]);i++)                \
{                                                                   \
    PRINT_MENU(i+1,option[i]);                                      \
}                                                                   \
}                                                                   \
while (0)                                                

#define CASE_OPTION(number,function) case number: function(); break;

#define HANDLER_OPTION(option, ...)                                  \
switch (option){                                                     \
    __VA_ARGS__                                                      \
    default:    break;                                               \
}

void feature_1(void) {printf("selection 1");}
void feature_2(void) {printf("selection 2");}
void feature_3(void) {printf("selection 3");}
void feature_4(void) {printf("selection 4");}

int main(void)
{
    MENU("OPTION 1", "OPTION 2","OPTION 3","OPTION 4");
    int n;
    scanf("%d",&n);
    HANDLER_OPTION(n,CASE_OPTION(1,feature_1)
                    CASE_OPTION(2,feature_2)
                    CASE_OPTION(3,feature_3)
                    CASE_OPTION(4,feature_4))

    return 0;
}