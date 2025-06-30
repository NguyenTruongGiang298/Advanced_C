#include <stdio.h>
#include <setjmp.h>
#include <stdint.h>
#include <string.h>
jmp_buf env;

typedef enum{
    NO_ERROR, 
    FILE_ERROR, 
    NETWORK_ERROR, 
    CALCULATION_ERROR
}Errorcodes;
uint8_t exception;
char c[100];
char error_code[100];
#define TRY if((exception=setjmp(env))==0)
#define CATCH(x) if(exception==x)
#define THROW(x,c)                          \
        do{                                 \
            strcpy(error_code,c);           \
            longjmp(env,x);                 \
        }while(0)

void readFile() {
    printf("Đọc file...\n");
    THROW(FILE_ERROR, "Lỗi đọc file: File không tồn tại.");
}

void networkOperation() {
    printf("Xử lý tín hiệu...\n");
    THROW(NETWORK_ERROR, "Lỗi xử lý mạng.");
}

void calculateData() {
    printf("Bắt đầu tính toán dữ liệu...\n");
    THROW(CALCULATION_ERROR, "Lỗi tính toán dữ liệu.");
}

int main(void )
{
    exception=NO_ERROR;
    TRY
    {
        readFile();
        networkOperation();
        calculateData();
    }
    CATCH(FILE_ERROR)
    {
        printf("%s\n", error_code);
    }
    CATCH(NETWORK_ERROR)
    {
        printf("%s\n", error_code);
    }
    CATCH(CALCULATION_ERROR)
    {
         printf("%s\n", error_code);
    }
    return 0;
}


