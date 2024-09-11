
# Double Linked List in C

A double linked list is a type of linked list where each node contains a data field and two pointers: one to the next node and one to the previous node. This allows traversal in both directions.

## Features

- **Node Structure**: Each node has pointers to the previous and next nodes.
- **DLL Operations**: Includes initialization, insertion, deletion, searching, and printing functions.
- **Reversal**: Function to reverse the linked list.
- **Memory Management**: Proper allocation and deallocation of memory.

## Data Structures

### Node
A node in the double linked list contains:
- `data`: An integer value stored in the node.
- `next`: Pointer to the next node in the list.
- `prev`: Pointer to the previous node in the list.

### DLL
The double linked list structure contains:
- `head`: Pointer to the first node in the list.
- `tail`: Pointer to the last node in the list.
- `size`: The number of elements in the list.

## Functions

- **DLL_init(DLL **list)**: Initializes a new double linked list.
- **node_constructor(int data)**: Constructs a new node with the given data.
- **DLL_destroy(DLL *list)**: Frees all nodes and the list itself.
- **DLL_copy(DLL *dest, DLL *src)**: Copies nodes from `src` to `dest`.
- **DLL_insertFront(DLL *list, int data)**: Inserts a node at the front of the list.
- **DLL_insertBack(DLL *list, int data)**: Inserts a node at the end of the list.
- **DLL_insertAfter(DLL *list, Node *node, int data)**: Inserts a node after a specified node.
- **DLL_insertBefore(DLL *list, Node *node, int data)**: Inserts a node before a specified node.
- **DLL_insert(DLL *list, int pos, int data)**: Inserts a node at a specified position.
- **DLL_removeFront(DLL *list)**: Removes the node at the front of the list.
- **DLL_removeBack(DLL *list)**: Removes the node at the end of the list.
- **DLL_removeNode(DLL *list, Node *node)**: Removes a specific node from the list.
- **DLL_search(DLL *list, int data)**: Searches for a node with the given data.
- **DLL_getSize(DLL *list)**: Returns the number of nodes in the list.
- **isEmpty(DLL *list)**: Checks if the list is empty.
- **printForward(DLL *list)**: Prints the list from head to tail.
- **printBackward(DLL *list)**: Prints the list from tail to head.
- **reverse(DLL *list)**: Reverses the order of nodes in the list.

