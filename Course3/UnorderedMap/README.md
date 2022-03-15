# Unordered Map Project C++

This project focuses on practical usage of hash tables in C++. Rather than implementing a hash table from scratch, we’ll make use of std::unordered_map, a templated hash table implementation that is provided by the C++ Standard Template Library (Project 1 for the Unordered Data Sructure Course).


## Overview of std::unordered_map:
std::unordered_map is implemented as a hash table, and the keys are not arranged in any predictable order, but instead are placed in hashing buckets as described in the lectures on hash tables. It offers very fast O(1) lookup times on average (that is, constant-time). For a class type to be compatible as a key, it must have an equality operation defined, and it also must have a hashing function defined.

## Memoization
Memoization or memoisation is an optimization technique used primarily to speed up computer programs by storing the results of expensive function calls and returning the cached result when the same inputs occur again. The cache results in this projects are stored in a hash table.


## Compiling in C++
- It includes a Makefile for creating main (use the defined classes/functions in some examples) and test executables.
- Navigate to the folder containing the Makefile and execute the "make" command to create two executables.
- Execute ./main to see some examples.
- Execute "make test" to run the tests described in the test folder on your application.