#include "include.h"
void constructor_list(List *list) {
    list->size = 0;
    list->head = NULL;
}
void constructor_node(Node *node, int data) {
    node->data = data;
    node->next = NULL;
}
void push_back(List *list, int data) {
    if(!list) {
        printf("NULL");
        return;
    }
    Node *new_node = (Node*)malloc(sizeof(Node));
    constructor_node(new_node,data);
    if(list->head == NULL) {
        list->head = new_node;
    }else{
        Node *current = list->head;
        while(current ->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
    list->size++;
}
void print_node(List *list) {
    if(!list) {
        printf("NULL");
        return;
    }
    if(!list->head) {
        printf("There is no element\n");
        return;
    }
    Node *current = list->head;
    printf("The list elements\n");
    while(current != NULL) {
        printf("%d " , current->data);
        current = current->next;
    }
    printf("\n");
}
void destroy(List *list) {
    if(!list) {
        printf("NULL");
        return;
    }
    if(list->head == NULL) {
        printf("There is no element\n");
        return;
    }
    Node *current = list->head;
    Node *temp = NULL;
    while(current->next != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }
    list->size = 0;
    list->head = NULL;
}
void pop_back(List *list) {
     if(!list) {
        printf("NULL");
        return;
    }
    if(list->head == NULL) {
        printf("There is no element for pop\n");
        return;
    }
    Node *current = list->head;
    Node *prev = NULL;
    while(current->next != NULL) {
        prev = current;
        current = current->next;
    }
    if(prev == NULL) {
        free(list->head);
        list->head = NULL;
    }
    else {
        free(current);
        prev->next = NULL;
    }
    list->size--;
}
void push_front(List *list, int data) {
     if(!list) {
        printf("NULL");
        return;
    }
    Node *new_node = (Node*)malloc(sizeof(Node));
    constructor_node(new_node,data);
    if(list->head == NULL) {
        list->head = new_node;
    }else {
        new_node->next = list->head;
        list->head = new_node;
    }
    list->size++;
}
void erase(List *list, int pos) {
    if(!list) {
        printf("NULL\n");
        return;
    }
    if(pos < 0 || pos >= list->size) {
        printf("Invalid Position\n");
        return;
    }
    Node *current = list->head;
    Node *prev = NULL;
    if(pos == 0) {
        list->head = current->next;
        free(current);
        list->size;
        return;
    }
    for(int i = 0; i < pos; i++) {
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
    free(current);
    list->size--;
}
void insert(List *list, int pos, int data) {
    if(!list) {
        printf("NULL\n");
        return;
    }
    if(pos < 0 || pos >= list->size ) {
        printf("The position is invalid\n");
        return;
    }
    Node *new_node = (Node*)malloc(sizeof(Node));
    constructor_node(new_node,data);
    Node *current = list->head;
    if(pos == 0) {
        new_node->next = list->head;
        list->head = new_node;
        list->size++;
        return;
    }
    Node *prev = NULL;
    for(int i = 0; i < pos - 1; i++ ) {
       
        current = current->next;
    }
    new_node->next = current->next;
    current->next = new_node;
    list->size++;
}
