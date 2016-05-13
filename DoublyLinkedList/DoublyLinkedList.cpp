#include "DoublyLinkedList.h"

// C:\Users\David\Desktop>g++ -std=c++0x -g3 Node.cpp DoublyLinkedList.cpp DemoDLL.cpp -o DemoDLL

using namespace std;

template<typename T>
DoublyLinkedList<T>::DoublyLinkedList()
{
	tail = NULL;
	head = NULL;
}

template<typename T>
DoublyLinkedList<T>::~DoublyLinkedList()
{
	if(tail != 0)
		delete tail;
	
	if(head != 0)
		delete head;
}

// Specialization for int
template<>
DoublyLinkedList<int>::toString()
{
	Node<int>* temp = head;
	string list_tostring = "";
	
	while(temp != 0)
	{
		list_tostring += to_string(temp->data);
		if(temp->next != 0)
			list_tostring += " ----> ";
		temp = temp->next;
	}
	
	if(list_tostring == "")
		cout << "The list is empty(" << to_string(count()) << ")" << endl;
	else
		cout << "The list(" << to_string(count()) << "): " + list_tostring << endl;
}

// Sepcialization for std::string
template<>
DoublyLinkedList<string>::toString()
{
	Node<string>* temp = head;
	string list_tostring = "";
	
	while(temp != 0)
	{
		list_tostring += temp->data;
		if(temp->next != 0)
			list_tostring += " ----> ";
		temp = temp->next;
	}
	
	if(list_tostring == "")
		cout << "The list is empty(" << to_string(count()) << ")" << endl;
	else
		cout << "The list(" << to_string(count()) << "): " + list_tostring << endl;
}

template<>
DoublyLinkedList<int>::toStringReverse()
{
	Node<int>* temp = tail;
	string list_tostring = "";
	
	while(temp != 0)
	{
		list_tostring += to_string(temp->data);
		if(temp->previous != 0)
			list_tostring += " ----> ";
		temp = temp->previous;
	}
	
	if(list_tostring == "")
		cout << "The list is empty(" << to_string(count()) << ")" << endl;
	else
		cout << "The list(" << to_string(count()) << "): " + list_tostring << endl;
}

template<>
DoublyLinkedList<string>::toStringReverse()
{
	Node<string>* temp = tail;
	string list_tostring = "";
	
	while(temp != 0)
	{
		list_tostring += temp->data;
		if(temp->previous != 0)
			list_tostring += " ----> ";
		temp = temp->previous;
	}
	
	if(list_tostring == "")
		cout << "The list is empty(" << to_string(count()) << ")" << endl;
	else
		cout << "The list(" << to_string(count()) << "): " + list_tostring << endl;
}

template<typename T>
int DoublyLinkedList<T>::count()
{
	Node<T>* temp = head;
	int numberOfNodes = 0;
	
	while(temp != 0)
	{
		numberOfNodes++;
		temp = temp->next;
	}
	
	return numberOfNodes;
}

template<typename T>
Node<T>* DoublyLinkedList<T>::fetchNode(T value)
{
	Node<T>* current = head;
	while(current != NULL)
	{
		if(current->data == value)
			return current;
		else
			current->next;
	}
	
	return NULL;
		
}

template<typename T>
DoublyLinkedList<T>::addNodeAfter(Node<T>* n, Node<T>* newNode)
{
	// Last element of list
	if(n->next == 0)
	{
		n->next = newNode;
		newNode->previous = n;
		tail = newNode;
	}
	else
	{
		newNode->next = n->next;
		newNode->previous = n;
		n->next->previous = newNode;
		n->next = newNode;
	}
}

template<typename T>
DoublyLinkedList<T>::addNodeBeginning(Node<T>* newNode)
{
	if(isEmpty())
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		newNode->next = head;
		head->previous = newNode;
		head = newNode;
	}
}

// Bool as return type
template<typename T>
bool DoublyLinkedList<T>::removeNode(T value)
{
	Node<T>* current = head;
	
	// Check if list has elements
	if(!isEmpty()){
		while(current != 0) {
			// Beginning of list
			if(head->data == value && current->next == 0)
			{
				delete current;
				head = NULL;
				tail = NULL;
				return 1;
			}
			// End of list
			else if(tail->data == value && current->next == 0)
			{
				tail = current->previous;
				tail->next = NULL;
				delete current;
				return 1;
			}
			// Element in between
			else if(current->data == value)
			{
				current->previous->next = current->next;
				current->next->previous = current->previous;
				delete current;
				return 1;
			}
			current = current->next;
		}
	}
	
	return 0;
}

template<typename T>
bool DoublyLinkedList<T>::isEmpty()
{
	return head == NULL;
}

template class DoublyLinkedList<int>;
template class DoublyLinkedList<string>;