/**
 * @brief Example of Queue Data Structure in C++
 * @file TestQueue.cpp
 * @author Mohammad Zarei 
 * Contact: <mzarei@uwaterloo.ca>
 * 
 */

#include <iostream>
#include <queue>

int main() {
    // Create a std queue
    std::queue <std::string> myQueue;

    // Get queue members from user
    std::string userInt;
    std::cout << "Enter some names (enter 'End' to end):\n" << std::endl;
    std::cin >> userInt;
    while (userInt != "End") 
        {
        myQueue.push(userInt);
        std::cin >> userInt;
        } 
    
    // Print queue details 
    std::cout << "The first element in the front of queue:\n" << std::endl;
    std::cout << myQueue.front() << std::endl;
    std::cout << "The last element in the back of queue:\n" << std::endl;
    std::cout << myQueue.back() << std::endl;

    std::cout << "All elements of queue:\n" << std::endl;
    while (!myQueue.empty())
        {
        std::cout << myQueue.front() << std::endl;;
        myQueue.pop();                  // pop has void return type
        }
    
    return 0;
}