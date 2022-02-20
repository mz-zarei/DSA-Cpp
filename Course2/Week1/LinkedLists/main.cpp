/**
 * @brief Linked list implementation in C++
 * @file main.cpp
 * @author Mohammad Zarei 
 * Contact: <mzarei@uwaterloo.ca>
 * 
 */

#include "linkedList.hpp"
#include <iostream>

int main() 
    {
    List<int> list;

    const int a = 1;
    const int b = 2;
    const int c = 3;

    std::cout << "Insert a at the end of the list..." << std::endl;
    list.pushAtEnd(a);
    list.pushAtEnd(b);
    list.pushAtEnd(c);
    std::cout << "(1) List items: " << std::endl;
    list.printList();

    list.pushAtStart(b);
    std::cout << "(2) List items: " << std::endl;
    list.printList();

    list.pushAtIndex(c, 2);
    std::cout << "(3) List items: " << std::endl;
    list.printList();

    list.pushAtIndex(c, 0);
    std::cout << "(4) List items: " << std::endl;
    list.printList();

    std::cout << "Size of list: "<< list.getSize() << std::endl;
    }

