/**
 * @brief Linked list implementation in C++
 * @file linkedList.h
 * @author Mohammad Zarei 
 * Contact: <mzarei@uwaterloo.ca>
 * 
 */


#pragma once
template <typename T>
class List 
    {
    private:
        class Node 
            {
            public:
                // A node refers to a pair of "data" and link to "next" node
                const T & data;
                Node *next;
                // Constructor that takes "input" and initialize "data" and "next".
                Node (const T & input) : data(input), next(nullptr) {}
            };
        Node *headNode_;                         // points to the start of our list
        Node *_find(const T & input);

    public:
        const T & operator [] (unsigned index);  // To access to item given its "index"
        void insert (const T & input);           // To insert a given input at the front of the list
        List() : headNode_(nullptr) {}           // To make sure that headNode_ is null-initialized.
        ~List()                                  // To delete assigned memory to List when it is destroyed
            {                                
            Node *nodePointer = headNode_;              // To walk through the list till it gets to nullptr
            while (nodePointer != nullptr)
                {
                Node *tempNodePointer = nodePointer;    // Copy the address that the "nodePointer" has currently.
                nodePointer = nodePointer -> next;      // Set the pointer to the "next" pointer of the current node.
                
                delete tempNodePointer;                 // Now delete the temporary pointer and set it to nullptr
                tempNodePointer = nullptr;
                }
                

            };
    };

