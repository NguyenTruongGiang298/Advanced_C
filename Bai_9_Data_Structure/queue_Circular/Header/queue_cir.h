#ifndef QUEUE_CIR_H
#define QUEUE_CIR_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct 
{
    int *items;
    int size;
    int rear;
    int front;
}Queue_Cir;

// khởi tạo thông số 
void queue_init(Queue_Cir *queue, int newsize );
// thêm
void enqueue(Queue_Cir *queue,int value);
// xóa
int dequeue(Queue_Cir *queue);
// đọc
int front(Queue_Cir queue);
int rear(Queue_Cir queue);
// kiểm tra
bool isFull(Queue_Cir queue);
bool isEmpty(Queue_Cir queue);
void free_memory(Queue_Cir *queue);
void display(Queue_Cir queue);


#endif