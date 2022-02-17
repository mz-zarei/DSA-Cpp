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

    const int a = 3;
    const int b = 34;

    std::cout << "Insert a at the front of the list..." << std::endl;
    list.insert(a);
    std::cout << "Item list[0]: "<< list[0] << std::endl;
    list.insert(b);
    std::cout << "Item list[0]: "<< list[0] << std::endl;
    std::cout << "Item list[1]: "<< list[1] << std::endl;
    }

