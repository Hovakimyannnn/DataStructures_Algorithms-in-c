#include "include.h"

int main () { 
    struct String str;
    init(&str);

    push_back(&str,'H');
    push_back(&str,'H');
    push_back(&str,'H');
    push_back(&str,'H');
    insert(&str,1,'A');
    pop_back(&str);

    destroy(&str);
}