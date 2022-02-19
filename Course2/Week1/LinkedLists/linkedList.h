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
                // A node refers to a pair of "data" and link to "nextNode" node
                const T & data;
                Node *nextNode;
                // Constructor that takes "input" and initialize "data" and "nextNode".
                Node (const T & input) : data(input), nextNode(nullptr) {}
            };
        Node *headNode_;                                             // points to the start of our list
        Node *_find(const T & input);

    public:
        void pushAtStart (const T & input);                          // To insert a given input at the start of the list
        void pushAtEnd (const T & input);                            // To insert a given input at the end of the list
        void pushAtIndex (const T & input, unsigned index);          // To insert a given input after a given index in the list
        void printList(void);                    // To print the list items
        unsigned int getSize(void);              // To get the size of the linked list
        
        const T & operator [] (unsigned index);  // To access to item given its "index"
        List() : headNode_(nullptr) {}           // To make sure that headNode_ is null-initialized.
        ~List()                                  // To delete assigned memory to List when it is destroyed
            {                                
            Node *nodePointer = headNode_;              // To walk through the list till it gets to nullptr
            while (nodePointer != nullptr)
                {
                Node *tempNodePointer = nodePointer;    // Copy the address that the "nodePointer" has currently.
                nodePointer = nodePointer -> nextNode;  // Set the pointer to the "nextNode" pointer of the current node.
                
                delete tempNodePointer;                 // Now delete the temporary pointer and set it to nullptr
                tempNodePointer = nullptr;
                }
                

            };
    };

