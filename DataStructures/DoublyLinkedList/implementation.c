#include "include.h"
void DLL_init(DLL **list) {
    if (!list) {
        printf("NULL\n");
        return;
    }
    *list = (DLL *)malloc(sizeof(DLL));
    if (*list == NULL) {
        perror("Failed to initialize list");
        exit(EXIT_FAILURE);
    }
    (*list)->head = NULL;
    (*list)->tail = NULL;
    (*list)->size = 0;
}

Node* node_constructor(int data) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (!new_node) {
        perror("Failed to allocate memory for node");
        exit(EXIT_FAILURE);
    }
    new_node->next = NULL;
    new_node->prev = NULL;
    new_node->data = data;
    return new_node;
}

void DLL_destroy(DLL *list) {
    if (!list) {
        printf("NULL\n");
        return;
    }
    Node *current = list->head;
    Node *temp = NULL;
    while (current) {
        temp = current;
        current = current->next;
        free(temp);
    }
    free(list);
}

void DLL_copy(DLL *dest, DLL *src) {
    if (!dest || !src) {
        printf("NULL\n");
        return;
    }

    Node *current = src->head;
    while (current) {
        DLL_insertBack(dest, current->data);
        current = current->next;
    }
}

void DLL_insertFront(DLL *list, int data) {
    if (!list) {
        printf("NULL\n");
        return;
    }
    Node *new_node = node_constructor(data);
    if (!list->head) {
        list->head = new_node;
        list->tail = new_node;
    } else {
        new_node->next = list->head;
        list->head->prev = new_node;
        list->head = new_node;
    }
    list->size++;
}

void DLL_insertBack(DLL *list, int data) {
    if (!list) {
        printf("NULL\n");
        return;
    }
    Node *new_node = node_constructor(data);
    if (!list->tail) {
        list->head = new_node;
        list->tail = new_node;
    } else {
        list->tail->next = new_node;
        new_node->prev = list->tail;
        list->tail = new_node;
    }
    list->size++;
}

void DLL_insertAfter(DLL *list, Node *node, int data) {
    if (!list || !node) {
        printf("NULL\n");
        return;
    }
    Node *new_node = node_constructor(data);
    new_node->next = node->next;
    new_node->prev = node;
    if (node->next) {
        node->next->prev = new_node;
    } else {
        list->tail = new_node;
    }
    node->next = new_node;
    list->size++;
}

void DLL_insertBefore(DLL *list, Node *node, int data) {
    if (!list || !node) {
        printf("NULL\n");
        return;
    }
    Node *new_node = node_constructor(data);
    new_node->next = node;
    new_node->prev = node->prev;
    if (node->prev) {
        node->prev->next = new_node;
    } else {
        list->head = new_node;
    }
    node->prev = new_node;
    list->size++;
}

void DLL_insert(DLL *list, int pos, int data) {
    if (!list) {
        printf("NULL\n");
        return;
    }
    if (pos < 0 || pos > list->size) {
        printf("Invalid Position\n");
        return;
    }
    if (pos == 0) {
        DLL_insertFront(list, data);
        return;
    }
    if (pos == list->size) {
        DLL_insertBack(list, data);
        return;
    }

    Node *new_node = node_constructor(data);
    Node *current = list->head;
    for (int i = 0; i < pos - 1; i++) {
        current = current->next;
    }
    new_node->next = current->next;
    new_node->prev = current;
    current->next->prev = new_node;
    current->next = new_node;
    list->size++;
}

void DLL_removeFront(DLL *list) {
    if (!list) {
        printf("NULL\n");
        return;
    }
    if (!list->head) {
        printf("There is no element\n");
        return;
    }
    Node *temp = list->head;
    if (list->head->next) {
        list->head = list->head->next;
        list->head->prev = NULL;
    } else {
        list->head = NULL;
        list->tail = NULL;
    }
    free(temp);
    list->size--;
}

void DLL_removeBack(DLL *list) {
    if (!list) {
        printf("NULL\n");
        return;
    }
    if (!list->tail) {
        printf("There are no elements\n");
        return;
    }
    Node *temp = list->tail;
    if (list->tail->prev) {
        list->tail = list->tail->prev;
        list->tail->next = NULL;
    } else {
        list->head = NULL;
        list->tail = NULL;
    }
    free(temp);
    list->size--;
}

void DLL_removeNode(DLL *list, Node *node) {
    if (!list || !node) {
        printf("NULL\n");
        return;
    }
    if (node == list->head) {
        DLL_removeFront(list);
    } else if (node == list->tail) {
        DLL_removeBack(list);
    } else {
        node->prev->next = node->next;
        node->next->prev = node->prev;
        free(node);
        list->size--;
    }
}

Node* DLL_search(DLL *list, int data) {
    if (!list) {
        printf("NULL\n");
        return NULL;
    }
    Node *current = list->head;
    while (current) {
        if (current->data == data) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

int DLL_getSize(DLL *list) {
    if (!list) {
        printf("NULL\n");
        return -1;
    }
    return list->size;
}

bool isEmpty(DLL *list) {
    if (!list) {
        printf("NULL\n");
        return true;
    }
    return list->size == 0;
}

void printForward(DLL *list) {
    if (!list) {
        printf("NULL\n");
        return;
    }
    Node *current = list->head;
    printf("The elements: ");
    while (current) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void printBackward(DLL *list) {
    if (!list) {
        printf("NULL\n");
        return;
    }
    Node *current = list->tail;
    printf("The elements: ");
    while (current) {
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
}

void reverse(DLL *list) {
    if (!list) {
        printf("NULL\n");
        return;
    }
    Node *current = list->head;
    Node *temp = NULL;

    while (current) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp) {
        list->head = temp->prev;
    }
}
