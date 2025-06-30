#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;
Node *createNode(int value);                    // tạo 1 Node bất kỳ
void push_back(Node **head, int value);        // thêm 1 node vào cuối list
void push_front(Node **head, int value);       // thêm 1 node vào đầu list
void insert(Node **head, int value, int pos);  // thêm 1 node vào vị trí bất kỳ
void pop_back(Node **head);                    // xóa 1 node cuối list
void pop_front(Node **head);                   // xóa 1 node đầu list
void erase(Node **head, int pos);              // xóa 1 node vị trí bất kỳ
int front(Node *head);                         // đọc giá trị node đầu tiên
int back(Node *head);                          // đọc giá trị node cuối cùng
int get(Node *head, int pos);                  // đọc giá trị node bất kỳ
int size(Node *head);                          // đếm số lượng node hiện tại
bool isEmpty(Node *head);                        // kiểm tra list rỗng
void clear(Node **head);
void display(Node *head);
#endif