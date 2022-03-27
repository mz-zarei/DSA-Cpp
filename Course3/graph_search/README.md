# Graph Searh Project C++

This project focuses on dealing with adjacency list graph representations and breadth-first search algorithm in C++. Rather than implementing a hash table from scratch, we’ll make use of std::unordered_map, a templated hash table implementation that is provided by the C++ Standard Template Library (Project 1 for the Unordered Data Sructure Course).


## Overview of std::unordered_set:
In this project, we use std::unordered_set in several places to represent collections of items having some shared property. A set contains value copies of objects, and it contains no duplicates; inserting the same item twice has no effect. In C++, the unordered set type uses hashing internally, so the key type must support equality comparison with the == operator as well as std::hash specialization. Unlike the unordered map type, the keys for an unordered set do not have associated values. We only care whether a given key has been inserted or not.

## Implementing adjacency lists
For this project, we’ll use the “adjacency lists” model for a graph data structure. We can rely on STL containers to get a somewhat simpler implementation that the one that is explained thoroughly in the lectures. That is, instead of maintaining a linked list of pointers for each vertex, and a separate, shared lookup table of explicit edge records, we will use this scheme: 
- Eachvertex object has a unique key. We create a map where each vertex has a separate entry based on its own key. 
- Each vertex should be mapped to a set of other keys, one key for each adjacent vertex (connected by an edge, implicitly).

## Breadth-First Search Algorithm (BFS)
Breadth-first search (BFS) is an algorithm for searching a tree data structure for a node that satisfies a given property. It starts at the tree root and explores all nodes at the present depth prior to moving on to the nodes at the next depth level. Extra memory, usually a queue, is needed to keep track of the child nodes that were encountered but not yet explored.

## Compiling in C++
- It includes a Makefile for creating main (use the defined classes/functions in some examples) and test executables.
- Navigate to the folder containing the Makefile and execute the "make" command to create two executables.
- Execute ./main to see some examples.
- Execute "make test" to run the tests described in the test folder on your application.