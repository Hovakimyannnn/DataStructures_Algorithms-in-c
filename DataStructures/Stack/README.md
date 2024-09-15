# Stack Implementation in C

 The stack is a linear data structure that follows the Last In, First Out (LIFO) principle, meaning that the last element pushed onto
 the stack is the first one to be popped.

# Stack Structure 
```c
typedef struct {
    int data[MAX];  // Array of integers to hold the stack elements
    int top;        // Index representing the top of the stack
} Stack;

```
# Stack Operations
- **initStack(Struct Stack)** Initializes the stack with an empty state (top = -1).
- **isempty(Struct Stack)** Checks if the stack is empty.
- **isfull(Struct Stack)** Checks if the stack is full.
- **push(Struct Stack,int value)**  Adds an element to the top of the stack.
- **pop(Struct Stack)**  Removes and returns the top element of the stack.
- **top(Struct Stack)** Returns the top element without removing it from the stack.
- **size(Struct Stack)**  Returns the current number of elements in the stack.

