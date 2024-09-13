#ifndef VECTOR
#define VECTOR

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct Vector {
    int *vec;
    int size;
    int cap;
};
extern struct Vector vector;

void at(const struct Vector *vector, int position);
void empty(const struct Vector *vector);
void push_back(struct Vector *vector, int value);
void pop_back(struct Vector *vector);
void front(const struct Vector *vector);
void back(const struct Vector *vector);
void size(const struct Vector *vector);
void cap(const struct Vector *vector);
void insert(struct Vector *vector, int value, int position);
void erase(struct Vector *vector, int position);
void print(const struct Vector *vec);
void free_struct(struct Vector *vector);
void shrink_to_fit(struct Vector *vector);
void initialize_vector(struct Vector *vector, int capacity);

#endif // VECTOR
