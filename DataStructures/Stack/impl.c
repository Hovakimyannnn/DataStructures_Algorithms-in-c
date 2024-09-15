#include "include.h"

void initStack(Stack *s) {
    s->top = -1;
}

int isempty(Stack *s) {
    return s->top == -1;
}

int isfull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, int value) {
    if (isfull(s)) {
        printf("Stack overflow, cannot push %d\n", value);
    } else {
        s->data[++(s->top)] = value;
        printf("Pushed %d into the stack\n", value);
    }
}

int pop(Stack *s) {
    if (isempty(s)) {
        printf("Stack underflow, cannot pop\n");
        return -1;  
    } else {
        return s->data[(s->top)--];
    }
}


int top(Stack *s) {
    if (isempty(s)) {
        printf("Stack is empty\n");
        return -1;  
    } else {
        return s->data[s->top];
    }
}

int size(Stack *s) {
    return s->top + 1;
}


