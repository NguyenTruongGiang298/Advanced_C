#include "list.h"

Node* createNode(int value)
{
    Node *newnode=(Node*)malloc(sizeof(Node));
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}
void display(Node *Head)
{
    if(isEmpty(Head))
    {
        printf("Danh sách rỗng\n");
    }
    else
    {
        while(Head!=NULL)
        {
            printf("%d ",Head->data);
            Head=Head->next;
        }
    }
    printf("\n");
}
void push_back(Node **head, int value)
{
    Node* newnode=createNode(value);
    if (isEmpty(*head))
    {
        *head=newnode;
    }
    else
    {
        Node* temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void push_front(Node **head, int value)     /*  *head =&head1  */   //địa chỉ head 1
{
    Node* newnode=createNode(value);    
    if (isEmpty(*head))                      /*  *head = head1 */    // vùng nhớ head1 đang trỏ tới
    {
        *head=newnode;
    }
    else
    {
        Node* temp=*head;                   /*  node temp trỏ tới vùng head đang trỏ tới */
        newnode->next=temp;
        *head=newnode;
    }
}
void insert(Node **head, int value, int pos)
{
    Node* newnode=createNode(value);    
    if (isEmpty(*head))                       
    {
        *head=newnode;
    }
    else
    {   
        if(pos>size(*head) || pos < 1) printf("Lỗi vị trí chèn!\n");
        else if(pos==1) push_front(head,value);
        else if(pos==size(*head)) push_back(head,value);
        else
        {
            Node* temp=*head; 
            for(int i=1;i<pos-1;i++)
            {
                temp=temp->next;
            }
            Node* tmp2=temp;         
            newnode->next=tmp2->next;
            temp->next=newnode;
        }
    }
}
void pop_back(Node **head)
{
    if (isEmpty(*head))
    {
        printf("Danh sách rỗng!\n");
    }
    else if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        Node* temp=*head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        Node* delNode=temp->next;
        temp->next=NULL;
        free(delNode);
    }
}
void pop_front(Node **head)
{
    if (isEmpty(*head))
    {
        printf("Danh sách rỗng!\n");
    }
    else
    {
        Node* temp=*head;
        Node* delNode=temp;
        *head=temp->next;
        free(delNode);
    }
}
void erase(Node **head, int pos)
{ 
    if (isEmpty(*head))                       
    {
        printf("Danh sách rỗng!\n");
    }
    else
    {   
        if(pos>size(*head) || pos < 1) printf("Lỗi vị trí chèn!\n");
        else if(pos==1) pop_front(head);
        else if(pos==size(*head)) pop_back(head);
        else
        {
            Node* temp=*head; 
            for(int i=1;i<pos-1;i++)
            {
                temp=temp->next;
            }
            Node* delNode=temp->next;         
            temp->next=delNode->next;
            free(delNode);
        }
    }
}
int front(Node *head)
{
    if (isEmpty(head))                       
    {
        printf("Danh sách rỗng!\n");
        return -1;
    }
    return head->data;
}
int back(Node *head)
{
    if (isEmpty(head))                       
    {
        printf("Danh sách rỗng!\n");
        return -1;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    return tmp->data;
}
int get(Node *head, int pos)
{
    if (isEmpty(head))                       
    {
        printf("Danh sách rỗng!\n");
        return -1;
    }
    if (pos < 1 || pos > size(head)) 
    {
        printf("Vị trí không hợp lệ!\n");
        return -1; 
    }
    Node* tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    return tmp->data;
}
int size(Node *head)
{
    if (isEmpty(head))                       
    {
        printf("Danh sách rỗng!\n");
        return 0;
    }
    else
    {   
        int cnt=0;
        while(head!=NULL)
        {
            head=head->next;
            cnt++;
        }
        return cnt;
    }
}
bool isEmpty(Node *head)
{
    return head==NULL;
}
void clear(Node **head)
{
    if (isEmpty(*head))                       
    {
        printf("Danh sách rỗng!\n");
    } 
    Node* tmp = *head;
    while (tmp != NULL)
    {
        Node *delNode = tmp ;
        tmp=tmp->next;
        free(delNode);
    }
    *head = NULL;
}