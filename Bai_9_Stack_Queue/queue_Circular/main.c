#include "queue.h"

int main(void)
{
    Queue_Cir queue1;
    queue_init(&queue1, 5);
    enqueue(&queue1,0);
    enqueue(&queue1,1);
    enqueue(&queue1,2);
    enqueue(&queue1,3);
    enqueue(&queue1,4);
    enqueue(&queue1,5);
    printf("Front: %d, Rear: %d\n",front(queue1),rear(queue1));
    display(queue1);

    dequeue(&queue1);
    dequeue(&queue1);
    printf("Front: %d, Rear: %d\n",queue1.front,queue1.rear);
    display(queue1);

    enqueue(&queue1,6);
    enqueue(&queue1,6);
    dequeue(&queue1);
    dequeue(&queue1);
    enqueue(&queue1,6);
    enqueue(&queue1,6);
    printf("Front: %d, Rear: %d\n",queue1.front,queue1.rear);
    display(queue1);

    dequeue(&queue1);
    dequeue(&queue1);
    dequeue(&queue1);
    dequeue(&queue1);
    dequeue(&queue1);
    printf("Front: %d, Rear: %d\n",queue1.front,queue1.rear);
    display(queue1);
    dequeue(&queue1);
    
    free_memory(&queue1);
    return 0;
}

