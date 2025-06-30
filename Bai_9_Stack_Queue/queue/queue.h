#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct 
{
    int *items;
    int size;
    int rear;
    int front;
}Queue;


// khởi tạo thông số 
void queue_init(Queue *queue, int newsize );
// thêm
void enqueue(Queue *queue,int value);
// xóa
int dequeue(Queue *queue);
// đọc
int front(Queue queue);
int rear(Queue queue);
// kiểm tra
bool isFull(Queue queue);
bool isEmpty(Queue queue);
void free_memory(Queue *queue);



#endif