# Binary Search in C

## Introduction

Binary Search is an efficient algorithm for finding an item from a sorted list of items. It works by repeatedly dividing in half the portion of the list that could contain the item, until you've narrowed down the possible locations to just one.

## How Binary Search Works

1. **Input:** A sorted array and a target value.
2. **Output:** The index of the target value if found in the array, otherwise `-1`.
3. **Steps:**
    - Start with the middle element of the array.
    - If the middle element is the target value, return its index.
    - If the target value is less than the middle element, repeat the search on the left half.
    - If the target value is greater than the middle element, repeat the search on the right half.
    - Continue this process until the target is found or the subarray reduces to zero size.

## Complexity
- Time Complexity: O(log n) - Binary Search is much faster than a linear search, especially for large datasets.
- Space Complexity: O(1) - Only a constant amount of extra space is required.

## Useful Recurses

[Binary Search in c](https://www.youtube.com/watch?v=Uuyv88Tn9iU)
[Binary Search Overview](https://www.youtube.com/watch?v=fDKIpRe8GW4)

## Getting Started

### Prerequisites

- A C compiler (like GCC)
- Basic understanding of C programming

### Files

- `code.c`: Contains the implementation of the Binary Search algorithm.

### Running the Program

1. **Compile the code:**
    ```bash
    gcc code.c -o binary_search
    ```
2. **Run the executable:**
    ```bash
    ./binary_search
    ```