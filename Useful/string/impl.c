#include "include.h"

void init(struct String *str) {
    if (!str) exit(1);
    str->cap = 1;
    str->size = 0;
    str->vector = malloc(sizeof(char) * str->cap);
}

void destroy(struct String *str) {
    if (!str) exit(1);
    str->size = 0;
    str->cap = 0;
    free(str->vector);
    str->vector = NULL;
}

char at(struct String *str, int pos) {
    if (!str || pos < 0 || pos >= str->size) exit(1);
    return str->vector[pos];
}
void init(struct String *str) {
    if (!str) exit(1);
    str->cap = 1;
    str->size = 0;
    str->vector = malloc(sizeof(char) * str->cap);
}

void destroy(struct String *str) {
    if (!str) exit(1);
    str->size = 0;
    str->cap = 0;
    free(str->vector);
    str->vector = NULL;
}

char at(struct String *str, int pos) {
    if (!str || pos < 0 || pos >= str->size) exit(1);
    return str->vector[pos];
}

bool empty(struct String *str) {
    if (!str) exit(1);
    return str->size == 0;
}

void push_back(struct String *str, char character) {
    if (!str) exit(1);
    if (str->size == str->cap) {
        str->cap *= 2;
        str->vector = realloc(str->vector, str->cap * sizeof(char));
        if (!str->vector) exit(1);
    }
    str->vector[str->size] = character;
    str->size++;
    str->vector[str->size] = '\0';
}

void pop_back(struct String *str) {
    if (!str || str->size == 0) exit(1);
    str->size--;
    str->vector[str->size] = '\0';
}

char front(struct String *str) {
    if (!str || str->size == 0) exit(1);
    return str->vector[0];
}

char back(struct String *str) {
    if (!str || str->size == 0) exit(1);
    return str->vector[str->size - 1];
}

int size(struct String *str) {
    if (!str) exit(1);
    return str->size;
}

int cap(struct String *str) {
    if (!str) exit(1);
    return str->cap;
}

void insert(struct String *str, int pos, char character) {
    if (!str || pos < 0 || pos > str->size) exit(1);
    if (str->size == str->cap) {
        str->cap *= 2;
        str->vector = realloc(str->vector, str->cap * sizeof(char));
        if (!str->vector) exit(1);
    }
    for (int i = str->size; i > pos; i--) {
        str->vector[i] = str->vector[i - 1];
    }
    str->vector[pos] = character;
    str->size++;
    str->vector[str->size] = '\0';
}

void erase(struct String *str, int pos) {
    if (!str || pos < 0 || pos >= str->size) exit(1);
    for (int i = pos; i < str->size - 1; i++) {
        str->vector[i] = str->vector[i + 1];
    }
    str->size--;
    str->vector[str->size] = '\0';
}

void clear(struct String *str) {
    if (!str) exit(1);
    str->size = 0;
    str->vector[0] = '\0';
}

void shrink_to_fit(struct String *str) {
    if (!str) exit(1);
    if (str->size == 0) return;
    str->cap = str->size;
    str->vector = realloc(str->vector, str->cap * sizeof(char));
    if (!str->vector) exit(1);
}

void reserve(struct String *str, int new_cap) {
    if (!str || new_cap <= str->cap) exit(1);
    str->vector = realloc(str->vector, new_cap * sizeof(char));
    if (!str->vector) exit(1);
    str->cap = new_cap;
}

void copy(const struct String *str1, struct String *str2) {
    if (!str1 || !str2) exit(1);
    destroy(str2);
    init(str2);
    str2->size = str1->size;
    str2->cap = str1->cap;
    str2->vector = realloc(str2->vector, sizeof(char) * str2->cap);
    if (!str2->vector) exit(1);
    memcpy(str2->vector, str1->vector, str1->size);
}

void swap(struct String *str1, struct String *str2) {
    if (!str1 || !str2) exit(1);
    char *temp_vector = str1->vector;
    int temp_size = str1->size;
    int temp_cap = str1->cap;

    str1->vector = str2->vector;
    str1->size = str2->size;
    str1->cap = str2->cap;

    str2->vector = temp_vector;
    str2->size = temp_size;
    str2->cap = temp_cap;
}

int find(struct String *str, const char *seq) {
    if (!str || !seq) exit(1);
    char *pos = strstr(str->vector, seq);
    return pos ? pos - str->vector : -1;
}

int rfind(struct String *str, const char *seq) {
    if (!str || !seq) exit(1);
    char *last_pos = NULL;
    char *current_pos = str->vector;
    while ((current_pos = strstr(current_pos, seq)) != NULL) {
        last_pos = current_pos;
        current_pos++;
    }
    return last_pos ? last_pos - str->vector : -1;
}

int cmp(struct String *str1, struct String *str2) {
    if (!str1 || !str2) exit(1);
    return strcmp(str1->vector, str2->vector) == 0;
}

bool startswith(struct String *str, const char *seq) {
    if (!str || !seq) exit(1);
    int len = strlen(seq);
    return len <= str->size && strncmp(str->vector, seq, len) == 0;
}

bool endswith(struct String *str, const char *seq) {
    if (!str || !seq) exit(1);
    int len = strlen(seq);
    return len <= str->size && strncmp(str->vector + str->size - len, seq, len) == 0;
}

bool contains(struct String *str, const char *seq) {
    if (!str || !seq) exit(1);
    return strstr(str->vector, seq) != NULL;
}

char *substr(struct String *str, int start_pos, int end_pos) {
    if (!str || start_pos < 0 || end_pos > str->size || start_pos > end_pos) exit(1);
    char *sub = malloc((end_pos - start_pos + 1) * sizeof(char));
    if (!sub) exit(1);
    strncpy(sub, str->vector + start_pos, end_pos - start_pos);
    sub[end_pos - start_pos] = '\0';
    return sub;
}


bool empty(struct String *str) {
    if (!str) exit(1);
    return str->size == 0;
}

void push_back(struct String *str, char character) {
    if (!str) exit(1);
    if (str->size == str->cap) {
        str->cap *= 2;
        str->vector = realloc(str->vector, str->cap * sizeof(char));
        if (!str->vector) exit(1);
    }
    str->vector[str->size] = character;
    str->size++;
    str->vector[str->size] = '\0';
}

void pop_back(struct String *str) {
    if (!str || str->size == 0) exit(1);
    str->size--;
    str->vector[str->size] = '\0';
}

char front(struct String *str) {
    if (!str || str->size == 0) exit(1);
    return str->vector[0];
}

char back(struct String *str) {
    if (!str || str->size == 0) exit(1);
    return str->vector[str->size - 1];
}

int size(struct String *str) {
    if (!str) exit(1);
    return str->size;
}

int cap(struct String *str) {
    if (!str) exit(1);
    return str->cap;
}

void insert(struct String *str, int pos, char character) {
    if (!str || pos < 0 || pos > str->size) exit(1);
    if (str->size == str->cap) {
        str->cap *= 2;
        str->vector = realloc(str->vector, str->cap * sizeof(char));
        if (!str->vector) exit(1);
    }
    for (int i = str->size; i > pos; i--) {
        str->vector[i] = str->vector[i - 1];
    }
    str->vector[pos] = character;
    str->size++;
    str->vector[str->size] = '\0';
}

void erase(struct String *str, int pos) {
    if (!str || pos < 0 || pos >= str->size) exit(1);
    for (int i = pos; i < str->size - 1; i++) {
        str->vector[i] = str->vector[i + 1];
    }
    str->size--;
    str->vector[str->size] = '\0';
}

void clear(struct String *str) {
    if (!str) exit(1);
    str->size = 0;
    str->vector[0] = '\0';
}

void shrink_to_fit(struct String *str) {
    if (!str) exit(1);
    if (str->size == 0) return;
    str->cap = str->size;
    str->vector = realloc(str->vector, str->cap * sizeof(char));
    if (!str->vector) exit(1);
}

void reserve(struct String *str, int new_cap) {
    if (!str || new_cap <= str->cap) exit(1);
    str->vector = realloc(str->vector, new_cap * sizeof(char));
    if (!str->vector) exit(1);
    str->cap = new_cap;
}

void copy(const struct String *str1, struct String *str2) {
    if (!str1 || !str2) exit(1);
    destroy(str2);
    init(str2);
    str2->size = str1->size;
    str2->cap = str1->cap;
    str2->vector = realloc(str2->vector, sizeof(char) * str2->cap);
    if (!str2->vector) exit(1);
    memcpy(str2->vector, str1->vector, str1->size);
}

void swap(struct String *str1, struct String *str2) {
    if (!str1 || !str2) exit(1);
    char *temp_vector = str1->vector;
    int temp_size = str1->size;
    int temp_cap = str1->cap;

    str1->vector = str2->vector;
    str1->size = str2->size;
    str1->cap = str2->cap;

    str2->vector = temp_vector;
    str2->size = temp_size;
    str2->cap = temp_cap;
}

int find(struct String *str, const char *seq) {
    if (!str || !seq) exit(1);
    char *pos = strstr(str->vector, seq);
    return pos ? pos - str->vector : -1;
}

int rfind(struct String *str, const char *seq) {
    if (!str || !seq) exit(1);
    char *last_pos = NULL;
    char *current_pos = str->vector;
    while ((current_pos = strstr(current_pos, seq)) != NULL) {
        last_pos = current_pos;
        current_pos++;
    }
    return last_pos ? last_pos - str->vector : -1;
}

int cmp(struct String *str1, struct String *str2) {
    if (!str1 || !str2) exit(1);
    return strcmp(str1->vector, str2->vector) == 0;
}

bool startswith(struct String *str, const char *seq) {
    if (!str || !seq) exit(1);
    int len = strlen(seq);
    return len <= str->size && strncmp(str->vector, seq, len) == 0;
}

bool endswith(struct String *str, const char *seq) {
    if (!str || !seq) exit(1);
    int len = strlen(seq);
    return len <= str->size && strncmp(str->vector + str->size - len, seq, len) == 0;
}

bool contains(struct String *str, const char *seq) {
    if (!str || !seq) exit(1);
    return strstr(str->vector, seq) != NULL;
}

char *substr(struct String *str, int start_pos, int end_pos) {
    if (!str || start_pos < 0 || end_pos > str->size || start_pos > end_pos) exit(1);
    char *sub = malloc((end_pos - start_pos + 1) * sizeof(char));
    if (!sub) exit(1);
    strncpy(sub, str->vector + start_pos, end_pos - start_pos);
    sub[end_pos - start_pos] = '\0';
    return sub;
}
