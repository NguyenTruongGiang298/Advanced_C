#include "../Header/queue.h"

// khởi tạo thông số 
void queue_init(Queue *queue, int newsize )
{
    queue->items=(int *)malloc(newsize * sizeof(int));
    queue->rear=queue->front=-1;
    queue->size=newsize;
}
// thêm
void enqueue(Queue *queue,int value)
{ 
    if(isFull(*queue))
    {
        printf("Hàng đợi đầy!\n");
    }
    else
    {
        if(queue->front==-1 && queue->rear==-1) queue->front= queue->rear=0;
        else
        {
            queue->rear++;
        }
        queue->items[queue->rear]=value;
        printf("Enqueue: %d\n",queue->items[queue->rear]);
    }
}
// xóa
int dequeue(Queue *queue)
{ 
    if(isEmpty(*queue))
    {
        printf("Hàng đợi trống!\n");
        return -1;
    }
    else
    {
        int value= queue->items[queue->front];
        queue->items[queue->front]=0;
        if(queue->front==queue->rear && queue->rear==queue->size-1) queue->front= queue->rear=-1;
        else
        {
            queue->front++;
        }
        return value;
    }
}

// đọc đầu
int front(Queue queue)
{
    if(isEmpty(queue))
    {
        printf("Hàng đợi trống!\n");
        return -1;
    }
    return queue.items[queue.front];
}
// đọc cuối
int rear(Queue queue)
{
    if(isEmpty(queue))
    {
        printf("Hàng đợi trống!\n");
        return -1;
    }
    return queue.items[queue.rear];
}
// kiểm tra
bool isFull(Queue queue)
{
    return (queue.rear == queue.size-1);
}
bool isEmpty(Queue queue)
{ 
    return (queue.front ==-1 || queue.front > queue.rear);
}
void free_memory(Queue *queue)
{
    if(queue->items !=NULL)
    {
        free(queue->items);
        queue->items=NULL;
    }
}