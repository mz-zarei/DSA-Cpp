#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#----------------------------------------------------------------------------
# Created By  : Mohammad Zarei
# Created Date: 17 Feb 2022
# version ='1.0'
# ---------------------------------------------------------------------------
"""Implentation of a Linked List Class"""
# ---------------------------------------------------------------------------
# Imports



from turtle import numinput


class Node:
    """represent a node in a linked list
                
    Attributes:
        data : the value stored in the node
        next : pointer to the next node in the linked list
    """
    def __init__(self, input=None):
        self.data = input
        self.next = None

class linkedList:
    """represent linked list with a number of nodes
                
    Attributes:
        headNode : a pointer to the first node of the list
    """
    def __init__(self):
        self.headNode = None

    def __str__(self):
        """
        represents the class objects as a string 
        """
        printItem = self.headNode
        printList = 'List: '
        while printItem != None:
            printList += str(printItem.data) + '->'
            printItem = printItem.next
        printList += 'None'
        return printList

    def insert(self, input):
        """Insert new item in the front of the linked list

        Args:
            input: new item to be inserted
        """
        newNode = Node(input)
        newNode.next = self.headNode
        self.headNode = newNode

    def delete(self, input):
        """Delete a given input from the linked list

        Args:
            input: item to be deleted
        """

        if self.headNode == None:
            return None

        if self.headNode.data == input:
            self.headNode =  self.headNode.next

        temp = self.headNode

        while  temp.next is not None:
            if temp.next.data == input:
                temp.next = temp.next.next
                return
            else:
                temp = temp.next
        return

## Example
list = linkedList()
list.headNode = Node("Mon")
n2 = Node("Tue")
n3 = Node("Wed")

list.headNode.next = n2
n2.next = n3

list.insert("Sun")
print(list)
list.delete("Tue")
print(list)
