# Level Order Generic Tree Traversal Project C++

The project impelements level order traversal in generic tree data structures (Project 2 for the Ordered Data Sructure Course).


## Generic Tree:
It is an “N-ary” tree, meaning each node can have many children, unlike a binary tree. There is no special balancing logic implemented for this tree, unlike an AVL tree or B-tree, although you could extend the class to add such a feature. The nodes are implemented to each hold an actual piece of data, as opposed to a pointer or reference to external data; however, the nodes are still
connected by pointers, with each node having a pointer to its parent, as well as a std::vector of pointers to its own children nodes.

## Level Order Traversal 
The level-order traversal strategy is related to breadth-first search, in that it attempts to finish work on an entire layer of the tree before working on the next layer. In contrast with the other methods, it is somewhat more natural to implement with a queue. However, it's possible to use a combination of data structures, iteration, and recursion to achieve certain walks through the tree in certain orders.


## Compiling in C++
- It includes a Makefile for creating main (use the defined classes/functions in some examples) and test executables.
- Navigate to the folder containing the Makefile and execute the "make" command to create two executables.
- Execute ./main to see some examples.
- Execute "make test" to run the tests described in the test folder on your application.