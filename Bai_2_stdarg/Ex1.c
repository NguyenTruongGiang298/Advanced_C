#include <stdio.h>
#include <stdarg.h>

typedef enum{
    PRESSURE_SENSOR,
    TEMPERATURE_SENSOR,
}sensor;


void in(sensor type, ...)
{
    va_list args;
    va_start(args,type);
    switch(type)
    {
       case PRESSURE_SENSOR:
            int numberArgs1=va_arg(args,int);
            int address1=va_arg(args,int);
            double data1=va_arg(args,double);
            printf("\n");
            printf("parameters: number: %d, ID: 0x%x, value: %.2f ",numberArgs1,address1,data1);
            if (numberArgs1>2)
            {
                char* additional_param=va_arg(args,char*);
                printf(", additional info %s ", additional_param);
            }
            break;
        
       case TEMPERATURE_SENSOR: 
            int numberArgs2=va_arg(args,int);
            int address2=va_arg(args,int);
            double data2=va_arg(args,double);
            printf("\n");
            printf("parameters: number: %d, ID: 0x%x, value: %.2f",numberArgs2,address2,data2);
            if (numberArgs2>2)
            {
                char* additional_param=va_arg(args,char*);
                 printf(", additional info: %s ", additional_param);
            }
            break;
    }
}
int main(void)
{
    in(TEMPERATURE_SENSOR,2,0x68,36.26);
    in(PRESSURE_SENSOR,3,0x74,5.2,"Dang nguy hiem");
    return 0;
}