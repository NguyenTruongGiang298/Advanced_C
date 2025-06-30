#include "stack.h"

int main(void)
{
    Stack stack1;
    stack_init(&stack1, 5);
    push(&stack1,1);
    push(&stack1,2);
    push(&stack1,3);
    push(&stack1,4);
    push(&stack1,5);
    push(&stack1,6);
    for (int i=0; i<stack1.size;i++)
    {
        printf("Elements: %d and Address: %p\n", stack1.items[i],&stack1.items[i]);
    }
    for (int i=0; i<stack1.size;i++)
    {
        printf("Top Elements: %d and Address: %p\n", pop(&stack1),&stack1.items[stack1.top]);
    }
    free_memory(&stack1);
    return 0;
}

