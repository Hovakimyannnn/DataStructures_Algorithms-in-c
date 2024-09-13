#include "include.h"

struct Vector vector;
void at(const struct Vector *vector, int position){
    if (vector->size == 0) {
        printf("The vector is empty\n");
        return;
    }
    if (position < 0 || position >= vector->size) {
        printf("The position is out of vector\n");
        return;
    }
    printf("The Element at %d position is %d\n", position, vector->vec[position]);
}

void empty(const struct Vector *vector) {
    if (vector->size == 0) {
        printf("The vector is empty\n");
        return;
    }
    printf("The vector is not empty\n");
}

void push_back(struct Vector *vector, int value) {
    if (vector->size == vector->cap) {
        vector->cap *= 2;
        vector->vec = realloc(vector->vec, vector->cap * sizeof(int));
        if (!vector->vec) {
            printf("Memory allocation failed\n");
            return;
        }
    }
    vector->vec[vector->size++] = value;
}

void pop_back(struct Vector *vector) {
    if (vector->size == 0) {
        printf("No element to pop\n");
        return;
    }
    vector->size--;
}

void front(const struct Vector *vector) {
    if (vector->size == 0) {
        printf("No elements\n");
        return;
    }
    printf("The front element is %d\n", vector->vec[0]);
}

void back(const struct Vector *vector) {
    if (vector->size == 0) {
        printf("No elements\n");
        return;
    }
    printf("The last element is %d\n", vector->vec[vector->size - 1]);
}

void size(const struct Vector *vector) {
    printf("The size is %d\n", vector->size);
}

void cap(const struct Vector *vector) {
    printf("The capacity is %d\n", vector->cap);
}

void insert(struct Vector *vector, int value, int position) {
    if (position < 0 || position > vector->size) {
        printf("Invalid position\n");
        return;
    }
    if (vector->cap == vector->size) {
        vector->cap *= 2;
        vector->vec = realloc(vector->vec, sizeof(int) * vector->cap);
    }
    for (int i = vector->size; i > position; i--) {
        vector->vec[i] = vector->vec[i - 1];
    }
    vector->vec[position] = value;
    vector->size++;
    printf("Element added successfully\n");
}

void erase(struct Vector *vector, int position) {
    if (position < 0 || position >= vector->size) {
        printf("Invalid position\n");
        return;
    }
    for (int i = position; i < vector->size - 1; i++) {
        vector->vec[i] = vector->vec[i + 1];
    }
    vector->size--;
    printf("Element deleted successfully\n");
}

void print(const struct Vector *vec) {
    for (int i = 0; i < vec->size; i++) {
        printf("%d ", vec->vec[i]);
    }
    printf("\n");
}

void free_struct(struct Vector *vector) {
    free(vector->vec);
    vector->vec = NULL;
    vector->cap = 0;
    vector->size = 0;
}

void shrink_to_fit(struct Vector *vector) {
    vector->vec = realloc(vector->vec, vector->size * sizeof(int));
    if (!vector->vec && vector->size > 0) {
        printf("Memory reallocation failed\n");
        return;
    }
    vector->cap = vector->size;
}

void initialize_vector(struct Vector *vector, int capacity) {
    vector->cap = capacity;
    vector->size = 0;
    vector->vec = malloc(sizeof(int) * vector->cap);
    if (!vector->vec) {
        printf("Memory allocation failed\n");
        exit(1);
    }
}
