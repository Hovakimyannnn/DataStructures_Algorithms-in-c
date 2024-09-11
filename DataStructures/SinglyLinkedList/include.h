#ifndef LIST_
#define LIST_
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;
typedef struct List {
    int size;
    Node *head;
}List;
void constructor_node(Node *,int);
void constructor_list(List *);
void push_back(List *,int);
void print_node(List *);
void pop_back(List *);
void erase(List *, int);
void destroy(List *);
void push_front(List *, int);
void insert(List *, int, int);


#endif //LIST_