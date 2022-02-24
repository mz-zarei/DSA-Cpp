# Doubly-Linked Lists and Merge Sort Project C++

The project impelements doubly-linked lists in order to be uesd for insertion and merge sort algorithms (Project 1 for the Ordered Data Sructure Course).


## Insertion Sort:
Insertion sort is a somewhat naive algorithm that sorts a list by inserting the original items, one at a time, into the correct position in a new list. In order to do this, it relies on an *insertOrdered* function that is implemented in this project. In the worst case, insertion sort has a running time of *O(n<sup>2</sup>)*. This is because even if *insertOrdered* runs in linear time, any *i<sup>th</sup>* insertion may have to walk over a list of length *i*.

## Merge Sort
Merge sort is a classic sorting algorithm that actually has a desirable running time. By repeatedly splitting the list into halves and then “merging” the pieces back together in sorted order, it achieves a running time of O(n log n); to explain briefly, the process of recursively splitting data in half will naturally make a call stack O(log n) layers deep, and there is O(n) overhead work to be done at each of those levels. Merge sort can be implemented either iteratively or recursively, and the provided code shows how this is done using our
*LinkedList* type. Both versions use the *merge* function repeatedly, which is implemented in this project.


## Compiling in C++
- It includes a Makefile for creating main (use the defined classes/functions in some examples) and test executables.
- Navigate to the folder containing the Makefile and execute the "make" command to create two executables.
- Execute ./main to see some examples.
- Execute "make test" to run the tests described in the test folder on your application.