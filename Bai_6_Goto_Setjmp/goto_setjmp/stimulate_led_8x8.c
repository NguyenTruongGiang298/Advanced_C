#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <unistd.h>
#include <conio.h>
// #include <string.h>
#include <stdlib.h>

char first_sentence[]="HI";
char second_sentence[]="HU";

typedef enum {
    FIRST,
    SECOND,
}sentence;

uint8_t H[8][8]=
{
    {1,1,0,0,0,0,1,1},
    {1,1,0,0,0,0,1,1},
    {1,1,0,0,0,0,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,0,0,0,0,1,1},
    {1,1,0,0,0,0,1,1},
    {1,1,0,0,0,0,1,1},
};

uint8_t I[8][8]=
{
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
    {0,0,0,1,1,0,0,0},
    {0,0,0,1,1,0,0,0},
    {0,0,0,1,1,0,0,0},
    {0,0,0,1,1,0,0,0},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1}
};

uint8_t U[8][8]=
{
    {1,1,0,0,0,0,1,1},
    {1,1,0,0,0,0,1,1},
    {1,1,0,0,0,0,1,1},
    {1,1,0,0,0,0,1,1},
    {1,1,0,0,0,0,1,1},
    {1,1,0,0,0,0,1,1},
    {1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1},
};

int8_t is_pressed()
{
    if(kbhit())  // kiểm tra có nút nào được nhấn hay không
    {
        char key=getch(); //đọc nút đã được nhấn
        if(key=='M' || key == 'm')
        {
            return 1;
        }
    }
    return 0;
}
void print(const uint8_t character[8][8])
{
    for (uint8_t i=0;i<8;i++)
    {
        for (uint8_t j=0;j<8;j++)
        {
            printf(character[i][j] ? "*" : " " );
        }
        printf("\n");
    }
    usleep(500000);
}
int main(void)
{
    sentence index = FIRST;
    while(1)
    {
        switch (index)
        {
            case FIRST:
                for (int i=0 ; i<2;i++) // sizeof của chuổi ký tự bằng số ký tự  + ký tự null vì size of lấy số byte mà mỗi ký tự 1 byte
                {
                    if (first_sentence[i] == 'H') {print(H); printf("\n");}
                    else if(first_sentence[i]=='I') {print(I);printf("\n");}
                    if (is_pressed())   goto exit;
                    
                }    
            case SECOND:
                for (int i=0 ; i<2;i++) // sizeof của chuổi ký tự bằng số ký tự  + ký tự null vì size of lấy số byte mà mỗi ký tự 1 byte
                {
                    if (second_sentence[i]=='H') {print(H);printf("\n");}
                    else if(second_sentence[i]=='U') {print(U);printf("\n");}
                    if (is_pressed())   goto exit;
                    
                }    
            goto logic;
        }
        logic:
            if (index==FIRST) index=SECOND;
            else if (index==SECOND) index=FIRST;
    }
    exit:
        printf("Stop!\n");
    return 0;
}