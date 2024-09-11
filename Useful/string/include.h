#ifndef STRING
#define STRING

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct String {
    char *vector;
    int size;
    int cap;
};


#endif // STRING_
