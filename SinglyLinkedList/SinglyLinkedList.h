#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include "Node.h"

template<typename T>
class SinglyLinkedList
{
	private:
		Node<T>* head;

	public:
		SinglyLinkedList();
		~SinglyLinkedList();
		
		toString();
		int count();
		Node<T>* fetchNode(T);
		removeNode(T);
		// append
		addNodeAfter(Node<T>*, Node<T>*);
		addNodeBeginning(Node<T>*);
		reverse();
		bool isEmpty();

};

#endif //SINGLY_LINKED_LIST_H
