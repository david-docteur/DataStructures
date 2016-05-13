#ifndef NODE_H
#define NODE_H

#include <iostream>

template <typename T>
class Node
{
	public:
		T data;
		Node<T> *next;
		
		Node<T>(T value);
		~Node<T>();
		const Node<T>* operator=(const Node<T>*);
		
		T getData();
		Node<T>* getNext();
		setNext(Node<T>*);
};

#endif // NODE_H