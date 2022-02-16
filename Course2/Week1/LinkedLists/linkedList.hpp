/**
 * @brief Linked list implementation in C++
 * @file linkedList.hpp
 * @author Mohammad Zarei 
 * Contact: <mzarei@uwaterloo.ca>
 * 
 */

#include <linkedList.h>

/**
 * Returns the "data" located at the given "index"
 */
template <typename T>
    const T & List<T>::operator[] (unsigned index)
        {
        Node *nodePointer = headNode_;                      // To walk through list with "index" steps
        while (nodePointer != nullptr && index > 0)
            {
            nodePointer = nodePointer->next;
            index--;
            }
        return nodePointer->data;
        }


/**
 * Insert new data at the front of the list
 */
template <typename T> 
    void List<T>::insert(const T & input)
        {
        Node *newNode = new Node(input);        // Create a new Node on the heap
        newNode->next = headNode_;              // Set "next" in new node to point to current head node
        headNode_ = newNode;                    // set the new node as head node
        }




/**
 * Finds and returns the ListNode containing `data` in the
 * List or `nullptr` if the data is not found.
 */
template <typename T>
    typename List<T>::Node *List<T>::_find(const T input);  // _find returns a type of node from a list of type T members
        {
        Node *nodePointer = headNode_;
        while (nodePointer != nullptr && input != nodePointer->data)
            {
            nodePointer = nodePointer->next;
            }
        return nodePointer;
        }