# Vector Implementation in C

Provides a dynamic integer vector implementation in C, allowing you to perform various operations on a resizable array.

## Vector Structure
```c
struct Vector {
    int *vec;   // Pointer to dynamically allocated array
    int size;   // Current size (number of elements)
    int cap;    // Current capacity (maximum number of elements before resizing)
};
```
# Functions

- **initialize_vector(struct Vector *vector, int capacity)**: Initializes the vector with a specified initial capacity.
- **at(const struct Vector *vector, int position)**: Accesses an element at a specific position.
- **empty(const struct Vector *vector)**: Checks if the vector is empty.
- **push_back(struct Vector *vector, int value)**: Adds an element to the end of the vector. Resizes the vector if needed.
- **pop_back(struct Vector *vector)**: Removes the last element from the vector.
- **front(const struct Vector *vector)**: Accesses the first element in the vector.
- **back(const struct Vector *vector)**: Accesses the last element in the vector.
- **size(const struct Vector *vector)**: Returns the current size of the vector.
- **cap(const struct Vector *vector)**: Returns the current capacity of the vector.
- **insert(struct Vector *vector, int value, int position)**: Inserts an element at a specific position. Resizes the vector if needed.
- **erase(struct Vector *vector, int position)**: Removes an element at a specific position.
- **print(const struct Vector *vector)**: Prints all elements in the vector.
- **free_struct(struct Vector *vector)**: Frees the memory allocated for the vector and resets its attributes.
- **shrink_to_fit(struct Vector *vector)**: Reduces the capacity of the vector to fit its current size.







