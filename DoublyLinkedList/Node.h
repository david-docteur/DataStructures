/*
* This class Node defines a node of the doubly linked list.
* The node itself has a value, a pointer to the next element and a pointer to the
* previous element.
* If the node is the first of the list, its previous pointer is set to NULL.
* If it is the last, then its next pointer is set to NULL.
*/

#ifndef NODE_H
#define NODE_H

#include <iostream>

template <typename T>
class Node
{
	public:
		// Data hold by the node
		T data;
		// Pointer to the previous element
		Node<T> *previous;
		// Pointer to the next element
		Node<T> *next;
		
		// Constructor
		Node<T>(T value);
		// Destructor
		~Node<T>();
		// Overload assignment operator
		const Node<T>* operator=(const Node<T>*);
		
		// Accessors
		T getData();
		Node<T>* getPrevious();
		setPrevious(Node<T>*);
		Node<T>* getNext();
		setNext(Node<T>*);
};

#endif // NODE_H