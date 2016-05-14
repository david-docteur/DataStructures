/*
* Header file for the DoublyLinkedList itself.
* The list will contain several elements linked to each other.
* The head and the tail of the list are always remembered.
*/

#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "Node.h"

template<typename T>
class DoublyLinkedList
{
	private:
		// Last element of the list
		Node<T>* tail;
		// First element of the list
		Node<T>* head;

	public:
		// Default constructor
		DoublyLinkedList();
		// Destructor
		~DoublyLinkedList();
		
		// Display the list
		toString();
		// Display the list in a reversed order
		toStringReverse();
		// Return the number of elements
		int count();
		// Return the position of an element
		int getPosition(Node<T>*);
		/*
		* Remove a Node based on its value
		* (we suppose that the first value found is removed)
		*/
		bool removeNode(T);
		// Add an element after an existing one
		addNodeAfter(Node<T>*, Node<T>*);
		// Add a node before the head
		addNodeBeginning(Node<T>*);
		// Is it empty? (head == NULL)
		bool isEmpty();
};

#endif //DOUBLY_LINKED_LIST_H
