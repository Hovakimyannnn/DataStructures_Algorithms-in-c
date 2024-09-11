#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#ifndef LIST
#define LIST

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    int data;
} Node;

typedef struct DLL {
    Node *head;
    Node *tail;
    int size;
} DLL;

void DLL_init(DLL **list);
Node* node_constructor(int data);
void DLL_destroy(DLL *list);
void DLL_copy(DLL *dest, DLL *src);
void DLL_insertFront(DLL *list, int data);
void DLL_insertBack(DLL *list, int data);
void DLL_insertAfter(DLL *list, Node *node, int data);
void DLL_insertBefore(DLL *list, Node *node, int data);
void DLL_insert(DLL *list, int pos, int data);
void DLL_removeFront(DLL *list);
void DLL_removeBack(DLL *list);
void DLL_removeNode(DLL *list, Node *node);
Node* DLL_search(DLL *list, int data);
int DLL_getSize(DLL *list);
bool isEmpty(DLL *list);
void printForward(DLL *list);
void printBackward(DLL *list) ;
void reverse(DLL *list);
#endif