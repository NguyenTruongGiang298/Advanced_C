#include "list.h"
int main(void)
{
    Node*head=NULL;
    push_back(&head,7);
    push_back(&head,9);
    push_back(&head,15);
    push_front(&head,99);
    push_front(&head,30);

    display(head);

    printf("Front: %d\n",front(head));
    printf("Back: %d\n",back(head));

    insert(&head,55,2);
    printf("size of list: %d\n",size(head));
    display(head);

    pop_back(&head);
    pop_front(&head);
    printf("size of list: %d\n",size(head));
    display(head);

    erase(&head,2);
    display(head);
    printf("\n");

    insert(&head,22,2);
    printf("Back: %d\n",get(head,2));
    display(head);

    clear(&head);
    size(head);
    return 0;
}