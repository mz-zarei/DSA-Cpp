/**
 * @brief Linked list implementation in C++
 * @file linkedList.hpp
 * @author Mohammad Zarei 
 * Contact: <mzarei@uwaterloo.ca>
 * 
 */

#include "linkedList.h"
#include <iostream>

/**
 * Returns the "data" located at the given "index"
 */
template <typename T>
    const T & List<T>::operator[] (unsigned index)
        {
        Node *nodePointer = headNode_;                      // To walk through list with "index" steps
        while (nodePointer->nextNode != nullptr && index > 0)
            {
            nodePointer = nodePointer->nextNode;
            index--;
            }
        return nodePointer->data;
        }



/**
 * Insert new data at the front of the list
 */
template <typename T> 
    void List<T>::pushAtStart(const T & input)
        {
        Node *newNode = new Node(input);        // Create a new Node on the heap
        newNode->nextNode = headNode_;          // Set "nextNode" in new node to point to current head node
        headNode_ = newNode;                    // set the new node as head node
        }




/**
 * Insert new data at the end of the list
 */
template <typename T> 
    void List<T>::pushAtEnd(const T & input)
        {
        if (headNode_ != nullptr)
            {
            Node *newNode = new Node(input);        // Create a new Node on the heap
            Node *temNode = headNode_;
            while (temNode->nextNode != nullptr)
                {
                temNode = temNode->nextNode;
                }
            temNode->nextNode =  newNode;           // Set "nextNode" of the last node to newNode
            }
        else
            {
            (*this).pushAtStart(input); 
            }
        }




/**
 * Insert new data at a given index
 */
template <typename T> 
    void List<T>::pushAtIndex(const T & input, unsigned index)
        {
        Node *newNode = new Node(input);

        if (index > (*this).getSize()-1 && index < 0)
            {
            std::cout << "Invalid index!";
            }
        else if (index == 0) 
            {
            newNode->nextNode = headNode_;
            headNode_ = newNode;
            }
        else
            {
            Node* temp = headNode_;
            for(int i = 1; i < index; i++)
                {
                if (temp != nullptr) {temp = temp->nextNode;};
                index--;
                }
            newNode->nextNode = temp->nextNode;
            temp->nextNode = newNode;
            }
        }   


/**
 * Prints all items in the list.
 */
template <typename T>
    void List<T>::printList(void)
        {
        Node *tempNode = headNode_;
        while (tempNode->nextNode != nullptr)
            {
            std::cout << tempNode->data << std::endl;
            tempNode = tempNode -> nextNode;
            }
        std::cout << tempNode->data << std::endl;
        }


/**
 * Finds and returns the size of ListNode.
 */
template <typename T>
    unsigned int List<T>::getSize(void)
        {
        unsigned int length = 1;
        Node *tempNode = headNode_;
        while (tempNode->nextNode != nullptr)
            {
            length++;
            tempNode = tempNode -> nextNode;
            }
        return length;
        }


/**
 * Finds and returns the ListNode containing `data` in the
 * List or `nullptr` if the data is not found.
 */
template <typename T>
    typename List<T>::Node *List<T>::_find(const T & input)  // _find returns a type of node from a list of type T members
        {
        Node *nodePointer = headNode_;
        while (nodePointer != nullptr && input != nodePointer->data)
            {
            nodePointer = nodePointer->nextNode;
            }
        return nodePointer;
        }