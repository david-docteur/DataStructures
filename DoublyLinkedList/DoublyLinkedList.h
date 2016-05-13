#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "Node.h"

template<typename T>
class DoublyLinkedList
{
	private:
		Node<T>* tail;
		Node<T>* head;

	public:
		DoublyLinkedList();
		~DoublyLinkedList();
		
		toString();
		toStringReverse();
		int count();
		Node<T>* fetchNode(T);
		bool removeNode(T);
		// append
		addNodeAfter(Node<T>*, Node<T>*);
		addNodeBeginning(Node<T>*);
		bool isEmpty();

};

#endif //DOUBLY_LINKED_LIST_H