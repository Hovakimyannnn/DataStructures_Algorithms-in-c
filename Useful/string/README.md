# Custom String Implementation in C

It provides functionality for string manipulation, including dynamic memory allocation, resizing, and operations similar to those found in higher-level languages like C++ or Python.

## Structure Overview

The `String` structure is defined as follows:

struct String {
    char *vector;   // Pointer to the dynamically allocated character array
    int size;       // Current size of the string (excluding the null-terminator)
    int cap;        // Capacity of the allocated memory (including space for the null-terminator)
};

This structure manages a string of characters, dynamically resizing the memory allocation as needed when the string grows or shrinks.

## Functions Overview

- **void init(struct String *str)**
Initializes the String structure with an initial capacity of 1 and sets the size to 0. The function allocates memory for the character array.

- **void destroy(struct String *str)**
Frees the memory allocated for the String and resets its size and capacity to 0.

- **char at(struct String *str, int pos)**
Returns the character at the specified position. If the position is invalid, the program exits with an error.

- **char front(struct String *str)**
Returns the first character of the string. The program exits if the string is empty.

- **char back(struct String *str)**
Returns the last character of the string. The program exits if the string is empty.

- **int size(struct String *str)**
Returns the current number of characters in the string (excluding the null-terminator).

- **int cap(struct String *str)**
Returns the current capacity of the string (including space for the null-terminator).

- **bool empty(struct String *str)**
Returns true if the string is empty (i.e., size is 0), and false otherwise.

- **void reserve(struct String *str, int new_cap)**:
Reserves memory for at least new_cap characters. This will not shrink the string, and only expands the memory if new_cap is greater than the current capacity.

- **void shrink_to_fit(struct String *str)**:
Reduces the capacity of the string to match its current size, freeing any unused memory.

- **void push_back(struct String *str, char character)**:
Appends a character to the end of the string. If the strings capacity is insufficient, the capacity is doubled.

- **void pop_back(struct String *str)**:
Removes the last character from the string, reducing its size by one.

- **void insert(struct String *str, int pos, char character)**:
Inserts a character at the specified position in the string, shifting all subsequent characters to the right.

- **void erase(struct String *str, int pos)**:
Removes the character at the specified position, shifting all subsequent characters to the left.

- **void clear(struct String *str)**:
Clears the contents of the string, setting its size to 0.

- **void copy(const struct String *src, struct String *dest)**:
Copies the contents of src string to dest. This overwrites the destination string.

- **void swap(struct String *str1, struct String *str2)**:
Swaps the contents of two String structures.**

- **int find(struct String *str, const char *seq)**:
Finds the first occurrence of the sequence seq in the string. Returns the starting index of the sequence, or -1 if not found.

- **int rfind(struct String *str, const char *seq)**:
Finds the last occurrence of the sequence seq in the string. Returns the starting index of the sequence, or -1 if not found.

- **int cmp(struct String *str1, struct String *str2)**:
Compares two strings. Returns 1 if they are equal, 0 otherwise.

- **bool startswith(struct String *str, const char *seq)**:
Returns true if the string starts with the sequence seq, otherwise returns false.

- **bool endswith(struct String *str, const char *seq)**:
Returns true if the string ends with the sequence seq, otherwise returns false.

- **bool contains(struct String *str, const char *seq)**:
Returns true if the string contains the sequence seq, otherwise returns false.

- **char *substr(struct String *str, int start_pos, int end_pos)**:
Returns a substring from start_pos to end_pos (not inclusive). Allocates memory for the substring, which must be freed by the caller.

