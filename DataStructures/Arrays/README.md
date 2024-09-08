# Array Data Structures in C

Arrays are fundamental data structures that store elements in contiguous memory locations. Understanding how to use different types of arrays is crucial for effective C programming.

## Table of Contents

- [Introduction](#introduction)
- [Static Arrays](#static-arrays)
- [Dynamic Arrays](#dynamic-arrays)
- [String Arrays](#string-arrays)

## Introduction

Arrays are a collection of elements of the same type stored in contiguous memory locations. They allow for efficient access and manipulation of data. In C, arrays can be categorized into static arrays, dynamic arrays, and string arrays (character arrays).

### Static Arrays
- **Fixed Size:** The size of a static array is determined at compile time and cannot be changed during runtime.
- **Efficient Access:** Elements can be accessed in constant time using an index.
- **Memory Management:** Memory for static arrays is automatically allocated and deallated.

### Dynamic Arrays
- **Flexible Size:** Dynamic arrays can change size during runtime, allowing for more flexible memory usage.
- **Manual Memory Management:** Memory for dynamic arrays is allocated and deallocated manually using functions like `malloc`, `calloc`, and `realloc`.

### String Arrays
- **Character Arrays:** Strings in C are represented as arrays of characters, ending with a null character `'\0'`.
- **Text Manipulation:** String arrays are used to store and manipulate text data.
