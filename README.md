# Off-by-One Error in C++ Vector Iteration

This repository demonstrates a common off-by-one error in C++ when iterating through a `std::vector`.  The error occurs because the loop condition incorrectly includes the size of the vector, causing an attempt to access an element that is out of bounds.

The `bug.cpp` file contains the erroneous code, while `bugSolution.cpp` provides a corrected version.

## Problem

The problem lies in the loop condition `i <= myVector.size()`.  `myVector.size()` returns the number of elements in the vector, but vector indices are zero-based. Therefore, the last valid index is `myVector.size() - 1`. Accessing `myVector[myVector.size()]` results in undefined behavior.

## Solution

The solution is to change the loop condition to `i < myVector.size()`, ensuring that the loop iterates only up to, but not including, the size of the vector.