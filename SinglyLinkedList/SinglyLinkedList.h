/*
* Header file for the SinglyLinkedList itself.
* The list will contain several elements linked to each other.
* The head of the list is always remembered.
*/

#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include "Node.h"

template<typename T>
class SinglyLinkedList
{
	private:
		// The beginning of the list, NULL if list is empty
		Node<T>* head;

	public:
		// Default Constructor
		SinglyLinkedList();
		// Destructor
		~SinglyLinkedList();
		
		// Display the content of the list
		toString();
		// Return the number of elements in the list
		int count();
		// Return the position of a Node
		int getPosition(Node<T>*);
		/*
		* Remove a Node based on its value
		* (we suppose that the first value found is removed)
		*/
		removeNode(T);
		// Insert a Node after an existing one
		addNodeAfter(Node<T>*, Node<T>*);
		// Insert a node before the head
		addNodeBeginning(Node<T>*);
		// Prints the list in the reverse order
		reverse();
		// Returns if a list is empty (head is NULL)
		bool isEmpty();
};

#endif //SINGLY_LINKED_LIST_H
