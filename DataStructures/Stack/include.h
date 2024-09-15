#ifndef STACK_  
#define STACK_

#include <stdio.h>
#include <stdlib.h>

#define MAX 50  


typedef struct {
    int data[MAX];
    int top;
} Stack;

void initStack(Stack *s);
int isempty(Stack *s);
int isfull(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
int top(Stack *s);
int size(Stack *s);

#endif 
