/**
 * @brief Insertion and merge sort using doubly-linked list C++
 * @file LinkedListExercises.cpp
 * @author Mohammad Zarei 
 * Contact: <mzarei@uwaterloo.ca>
 * 
 */


// Prevent the header from being included more than once per cpp file
#pragma once

// It's good to put system headers first, so that if your own libraries
// cause conflicts, the compiler will most likely identify the problem
// as being in your own source code files, where it arises later.
#include <iostream>
#include <string>

#include "LinkedList.h"

/********************************************************************
  Task 1: insertOrdered

  This LinkedList member function assumes that the current contents
  of the list are already sorted in increasing order. The function
  takes as input a new data item to be inserted to the same list.
  The new data item should be inserted to the list in the correct
  position, so that you preserve the overall sorted state of the list.

  For example, if your LinkedList<int> contains:
  [1, 2, 8, 9]
  And the input is 7, then the list should be updated to contain:
  [1, 2, 7, 8, 9]

  A new node will be created on the heap, and it should be inserted 
  in front of the earliest node in the list that contains a greater 
  data element. If no such other node exists, then the new item should
  be placed at the end (the back of the list).

  Also, the size_ member of the list will be updated if needed.
 ********************************************************************/

template <typename T>
void LinkedList<T>::insertOrdered(const T& newData) {

  // -----------------------------------------------------------
  Node *newNode = new Node(newData);
  
  // (1) If list is empty
  if (size_ == 0) 
  {
    (*this).pushBack(newData);
  }
  // (2) If newData is smaller than head_ is empty
  else if (head_->data >= newData)
  {
    (*this).pushFront(newData);
  }
  // (3) If newData is bigger than tail_ is empty
  else if (tail_->data <= newData)
  {
    (*this).pushBack(newData);
  }
  // (4) If newData belongs somewhere in the middle of the list
  else
  {
    Node *tempNode = head_;
    // find the first node that is bigger than newData
    while ((tempNode->next != nullptr) && (tempNode->data < newNode->data))
    {
      tempNode = tempNode->next;
    }
    // update the next/prev pointers 
    newNode->prev = tempNode->prev;
    newNode->next = tempNode;
    tempNode->prev->next = newNode;
    tempNode->prev = newNode;

    // update size
    size_++;
  }
}

/********************************************************************
  Task 2: Linear-time Merge

  This LinkedList member function is intended to perform the classic
  "merge" operation from the mergesort algorithm. It combines two sorted
  lists into a single sorted list. This algorithm is intended to run
  in linear time (that is, O(n) where n is the total number of elements
  in the input lists), so it is not appropriate to simply concatenate
  the two lists and then apply a sorting algorithm. Instead, the merge
  algorithm relies on the fact that the two input lists are already sorted
  separately in order to create the merged, sorted list in linear time.
 ********************************************************************/

template <typename T>
LinkedList<T> LinkedList<T>::merge(const LinkedList<T>& other) const {

  // make "working copies" of the two lists
  LinkedList<T> left = *this;
  LinkedList<T> right = other;

  
  // make an empty list called "merged" to build the final result
  LinkedList<T> merged;

  // loop till both lists are empty
  while (left.size_ + right.size_ > 0)
  {
    // if only "left" list is empty, add all items in "right" to "merged"
    if (left.empty() && !right.empty())
    {
      while (!right.empty())
      {
        merged.pushBack(right.head_->data);
        right.popFront();
      }
      
    }
    // if only "right" list is empty, add all items in "left" to "merged"
    else if (!left.empty() && right.empty())
    {
      while (!left.empty())
      {
        merged.pushBack(left.head_->data);
        left.popFront();
      }
      
    }
    // if both lists are non-empty, add the smallest head item to "merged"
    else
    {
      if (left.head_->data <= right.head_->data)
      {
        merged.pushBack(left.head_->data);
        left.popFront();
      }
      else if (left.head_->data > right.head_->data)
      {
        merged.pushBack(right.head_->data);
        right.popFront();
      }
    }
  }
  
  // We return the merged list by value here. It may be copied out of the
  // function, but usually the compiler will optimize this to automatically
  // create it directly in the correct memory space outside without copying.
  // Don't worry about the speed of that right now. (also all of our nodes 
  // are created on the heap. The part of the list that we pass back is 
  // really small; it just contains two pointers and an int.)
  return merged;
}

