#include "include.h"

Stack s;
int main() {
    initStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);
    push(&s, 60);  

    printf("Top element: %d\n", top(&s));
    printf("Stack size: %d\n", size(&s));

    printf("Popped element: %d\n", pop(&s));
    printf("Popped element: %d\n", pop(&s));

    printf("Stack size after popping: %d\n", size(&s));
    printf("Is stack empty? %d\n", isempty(&s));

    return 0;
}