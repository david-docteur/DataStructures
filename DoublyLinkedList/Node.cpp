#include <string>
#include "Node.h"

using namespace std;

template<typename T>
Node<T>::Node(T value)
{
	data = value;
	previous = NULL;
	next = NULL;
}

template<typename T>
Node<T>::~Node()
{
	
}

template<typename T>
const Node<T>* Node<T>::operator=(const Node<T>* n)
{
	cout << "Calling Node Assignment Operator." << endl;
	
	if(n == this)
		return this;
	
	data = n->data;
	if(n->previous)
		previous = n->previous;
	if(n->next)
		next = n->next;
	
	return this;
}

template<typename T>
T Node<T>::getData()
{
	return data;
}

template<typename T>
Node<T>* Node<T>::getPrevious()
{
	return previous;
}

template<typename T>
Node<T>::setPrevious(Node<T>* n)
{
	previous = n;
}

template<typename T>
Node<T>* Node<T>::getNext()
{
	return next;
}

template<typename T>
Node<T>::setNext(Node<T>* n)
{
	next = n;
}

template class Node<int>;
template class Node<string>;