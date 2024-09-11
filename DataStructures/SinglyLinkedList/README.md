# Singly Linked List in C

A singly linked list is a linear data structure where each element, called a node, contains a data field and a pointer to the next node. The list terminates when a node points to `NULL`. This implementation includes common operations such as insertion, deletion, searching, and traversing through the list.

## Features

- **Node Structure**: Each node contains an integer `data` and a pointer `next` to the next node in the list.
- **List Operations**: Supports initialization, insertion, deletion, traversing, and memory deallocation.
- **Memory Management**: Allocates memory for new nodes and frees memory during list destruction or node deletion.

## Data Structures

### Node
A node in the singly linked list contains:
- `data`: The integer data value stored in the node.
- `next`: A pointer to the next node in the list.

### List
The singly linked list contains:
- `head`: A pointer to the first node in the list.
- `size`: The number of elements (nodes) in the list.

## Functions

- **constructor_list(List *list)**: Initializes a new empty list by setting the `head` to `NULL` and `size` to 0.
- **push_back(List *list, int data)**: Appends a new node with the given data to the end of the list.
- **push_front(List *list, int data)**: Adds a new node with the given data at the front of the list.
- **pop_back(List *list)**: Removes the last node from the list.
- **erase(List *list, int pos)**: Removes the node at the specified position (0-based indexing).
- **insert(List *list, int pos, int data)**: Inserts a new node with the given data at the specified position (0-based indexing).
- **constructor_node(Node *node, int data)**: Initializes a node with the given data and sets the `next` pointer to `NULL`.
- **print_node(List *list)**: Prints the data of all the nodes in the list.
- **destroy(List *list)**: Frees all the nodes and resets the list to an empty state.

