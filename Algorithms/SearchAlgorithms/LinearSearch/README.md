# Linear Search in C

## Introduction

This project demonstrates the implementation of the Linear Search algorithm in C. Linear Search is a simple algorithm that checks each element in a list sequentially until the target value is found or the list ends.

## How Linear Search Works

1. **Input:** An array and a target value.
2. **Output:** The index of the target value if found in the array, otherwise `-1`.
3. **Steps:**
    - Start from the first element of the array.
    - Compare the target value with each element of the array one by one.
    - If a match is found, return the index of the matching element.
    - If no match is found, return `-1` after the entire array has been searched.

## Complexity
- Time Complexity: O(n) - Linear Search checks each element in the array, so the time taken increases linearly with the number of elements.
- Space Complexity: O(1) - Only a constant amount of extra space is required.

## Useful Recurses

[Linear Search in c](https://www.youtube.com/watch?v=AqjVd6FVFbE)
[Linear Search Overview](https://www.youtube.com/watch?v=C46QfTjVCNU)

## Getting Started

### Prerequisites

- A C compiler (like GCC)
- Basic understanding of C programming

### Files

- `code.c`: Contains the implementation of the Linear Search algorithm.

### Running the Program

1. **Compile the code:**
    ```bash
    gcc code.c -o linear_search
    ```
2. **Run the executable:**
    ```bash
    ./linear_search
