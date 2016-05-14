/*
* This class Node defines a node of the singly linked list.
* The node itself has a value and a pointer to the next element in the list.
* If the node is the last of the list, then its pointer is set to NULL.
*/

#ifndef NODE_H
#define NODE_H

#include <iostream>

template <typename T>
class Node
{
	public:
		// Value of the node
		T data;
		// Pointer to next node
		Node<T> *next;
		
		// Default constructor
		Node<T>(T value);
		// Overriding 
		const Node<T>* operator=(const Node<T>*);
		
		// Accessors
		T getData();
		Node<T>* getNext();
};

#endif // NODE_H
