/**
 * @brief Example of Stack Data Structure in C++
 * @file TestStack.cpp
 * @author Mohammad Zarei 
 * Contact: <mzarei@uwaterloo.ca>
 * 
 */

#include <iostream>
#include <stack>

int main() {
    // Create a std stack
    std::stack <std::string> myStack;

    // Get stack members from user
    std::string userInt;
    std::cout << "Enter some names (enter 'End' to end):\n" << std::endl;
    std::cin >> userInt;
    while (userInt != "End") 
        {
        myStack.push(userInt);
        std::cin >> userInt;
        } 
    
    // Print stack details 
    std::cout << "The first element on top of stack:\n" << std::endl;
    std::cout << myStack.top() << std::endl;

    std::cout << "All elements of stack:\n" << std::endl;
    while (!myStack.empty())
        {
        std::cout << myStack.top() << std::endl;;
        myStack.pop();                  // pop has void return type
        }
    
    return 0;
}