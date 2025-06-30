#include "../Header/queue.h"

int main(void)
{
    Queue queue1;
    queue_init(&queue1, 5);
    enqueue(&queue1,0);
    enqueue(&queue1,1);
    enqueue(&queue1,2);
    enqueue(&queue1,3);
    enqueue(&queue1,4);
    for (int i=0; i<queue1.size;i++)
    {
        printf("Elements: %d and Address: %p\n", queue1.items[i],&queue1.items[i]);
    }
    printf("\n");
    printf("Front: %d, Rear: %d\n",front(queue1),rear(queue1));
    for (int i=0; i<3;i++)
    {

        printf("Front Elements: %d and Address: %p\n", dequeue(&queue1),&queue1.items[i]);
        printf("Front: %d, Rear: %d\n",front(queue1),rear(queue1));
    }
    enqueue(&queue1,6);
    free_memory(&queue1);
    return 0;
}

