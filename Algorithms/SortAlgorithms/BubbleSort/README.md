# Bubble Sort in C

## Introduction

This project demonstrates the implementation of the Bubble Sort algorithm in C. Bubble Sort is a simple comparison-based sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted.

## How Bubble Sort Works

1. **Input:** An unsorted array of elements.
2. **Output:** The array sorted in ascending order.
3. **Steps:**
    - Start at the beginning of the array.
    - Compare each pair of adjacent elements.
    - If the elements are in the wrong order (i.e., the first is greater than the second), swap them.
    - Continue this process until the array is sorted, which is when no more swaps are needed during a full pass through the array.

## Complexity
- Time Complexity:
Worst-case: O(n²) - occurs when the array is in reverse order.
Best-case: O(n) - occurs when the array is already sorted.
- Space Complexity: 
O(1) Bubble Sort is an in-place sorting algorithm, meaning it requires only a constant amount of additional space.
## Getting Started

### Prerequisites

- A C compiler (like GCC)
- Basic understanding of C programming

### Files

- `code.c`: Contains the implementation of the Bubble Sort algorithm.

### Running the Program

1. **Compile the code:**
    ```bash
    gcc code.c -o bubble_sort
    ```
2. **Run the executable:**
    ```bash
    ./bubble_sort
    ```
