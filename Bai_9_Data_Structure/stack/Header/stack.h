#ifndef STACK_H
#define STACK_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// mảng, chỉ định kích thước, chỉ số top
typedef struct 
{
    int *items;
    int size;
    int top;
}Stack;


// khởi tạo thông số 
void stack_init(Stack *stack, int newsize );
// thêm
void push(Stack *stack,int value);
// xóa
int pop(Stack *stack);
// đọc
int top(Stack stack);
// kiểm tra
bool isFull(Stack stack);
bool isEmpty(Stack stack);
void free_memory(Stack *stack);
#endif
