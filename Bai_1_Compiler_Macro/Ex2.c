#include <stdio.h>

#define STRINGSIZE(x) #x
#define DECLARE_VAR(prefix,x) int prefix##x
/* ## ghép 2 đoạn văn bản*/

int main(void)
{

    printf("%s\n", STRINGSIZE(Chuan bi phat bieu hai bien));
    DECLARE_VAR(VAR,2);
    DECLARE_VAR(VAR,1);
    VAR1=10;
    VAR2=20;
     printf("%d and %d\n", VAR1, VAR2);
     
    return 0;
}