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



class Node:
    """represent a node in a linked list
                
    Attributes:
        data : the value stored in the node
        nextNode : pointer to the next node in the linked list
    """
    def __init__(self, input=None):
        self.data = input
        self.nextNode = None

class linkedList:
    """represent linked list with a number of nodes
                
    Attributes:
        headNode : a pointer to the first node of the list
    """
    def __init__(self):
        self.headNode = None

    def printList(self):
        """
        Prints items in the linked list
        """
        printItem = self.headNode
        while printItem != None:
            print(printItem.data)
            printItem = printItem.nextNode
    def insert(self, input):
        """Insert new item in the front of the linked list

        Args:
            input: new item to be inserted
        """
        newNode = Node(input)
        newNode.nextNode = self.headNode
        self.headNode = newNode


## Example
list = linkedList()
list.headNode = Node("Mon")
n2 = Node("Tue")
n3 = Node("Wed")

list.headNode.nextNode = n2
n2.nextNode = n3

list.insert("Sun")
list.printList()