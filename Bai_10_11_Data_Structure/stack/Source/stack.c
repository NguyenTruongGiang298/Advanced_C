#include "stack.h"
#include <stdlib.h>


// khởi tạo thông số 
void stack_init(Stack *stack, int newsize )
{
    stack->items=(int *)malloc(newsize*sizeof(int));
    stack ->size=newsize;
    stack->top=-1;
}
// thêm
void push(Stack *stack, int value)
{
    if(isFull(*stack))   
    {
        printf("bộ nhớ đầy\n");
    }
    else 
    {
        stack->items[++stack->top]=value;
        printf("push: %d\n",stack->items[stack->top]);
    }
}
// xóa
int pop(Stack *stack)
{
    if(isEmpty(*stack)) 
    {
        printf("bộ nhớ rổng\n");
        return -1;
    }
    else 
    {
        int value = top(*stack);
        stack->items[stack->top--]=0;
        return  value;
    }
}
// đọc
int top(Stack stack)
{
    if (isEmpty(stack)) 
    {
        printf("Rỗng\n");
        return -1;    
    }
    return  stack.items[stack.top];
}
// kiểm tra
bool isFull(Stack stack)
{
    return (stack.top == stack.size-1 ? true : false ); 
}

bool isEmpty(Stack stack)
{
    return (stack.top == -1 ? true : false ); 
}
// free bộ nhớ
void free_memory(Stack *stack)
{
    if(stack->items !=NULL)
    {
        free(stack->items);
        stack->items=NULL;
    }
}


