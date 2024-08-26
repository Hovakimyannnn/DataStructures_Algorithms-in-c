#include "include.h"
int main() {
    List *list = (List*)malloc(sizeof(List));
    constructor_list(list);
    push_back(list,10);
    push_back(list,20);
    push_back(list,30);
    push_back(list,40);
    push_back(list,50);
    print_node(list);
    push_front(list,124);
    erase(list,1);
    print_node(list);
    insert(list,1,10);
    print_node(list);
    destroy(list);

}