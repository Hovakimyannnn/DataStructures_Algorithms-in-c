#include "include.h"

int main() {
    DLL *list;
    DLL_init(&list);

    DLL_insertBack(list, 1);
    DLL_insertBack(list, 2);
    DLL_insertBack(list, 3);
    printForward(list);
    printBackward(list);

    reverse(list);
    printForward(list);
    printBackward(list);

    DLL_destroy(list);
    return 0;
}
