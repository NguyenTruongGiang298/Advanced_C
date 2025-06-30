#include "queue.h"

// khởi tạo thông số 
void queue_init(Queue_Cir *queue, int newsize )
{
    queue->items=(int *)malloc(newsize * sizeof(int));
    queue->rear=queue->front=-1;
    queue->size=newsize;
}
// thêm
void enqueue(Queue_Cir *queue,int value)
{ 
    if(isFull(*queue))
    {
        printf("Hàng đợi đầy!\n");
    }
    else
    {
        if(queue->front==-1) queue->front= queue->rear=0;
        else  queue->rear=(queue->rear+1)%queue->size;
        queue->items[queue->rear]=value;
        printf("Enqueue: %d\n",queue->items[queue->rear]);
    }
}
// xóa
int dequeue(Queue_Cir *queue)
{ 
    if(isEmpty(*queue))
    {
        printf("Hàng đợi trống!\n");
        return -1;
    }
    else
    {
        printf("Dequeue: %d\n",queue->items[queue->front]);
        queue->items[queue->front]=0;
        if(queue->front == queue->rear) queue->front = queue->rear =-1;
        else queue->front=(queue->front+1) % queue->size;
        return 0;
    }
}
// đọc đầu
int front(Queue_Cir queue)
{
    if(isEmpty(queue))
    {
        printf("Hàng đợi trống!\n");
        return -1;
    }
     return queue.items[queue.front];
}
// đọc cuối
int rear(Queue_Cir queue)
{
    if(isEmpty(queue))
    {
        printf("Hàng đợi trống!\n");
        return -1;
    }
    return queue.items[queue.rear];
}
// kiểm tra
bool isFull(Queue_Cir queue)
{
    return (queue.front == (queue.rear+1)%queue.size);
}
bool isEmpty(Queue_Cir queue)
{ 
    return (queue.front ==-1);
}
void free_memory(Queue_Cir *queue)
{
    if(queue->items !=NULL)
    {
        free(queue->items);
        queue->items=NULL;
    }
}
void display(Queue_Cir queue)
{
    for (int i=0; i<queue.size;i++)
    {
        printf("Elements: %d and Address: %p\n", queue.items[i],&queue.items[i]);
    }
    printf("\n");
}