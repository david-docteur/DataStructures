#include "SinglyLinkedList.h"

// C:\Users\David\Desktop>g++ -std=c++0x -g3 Node.cpp SinglyLinkedList.cpp DemoSLL.cpp -o DemoSLL

using namespace std;

template<typename T>
SinglyLinkedList<T>::SinglyLinkedList()
{
	head = NULL;
}

template<typename T>
SinglyLinkedList<T>::~SinglyLinkedList()
{
	if(head != 0)
		delete head;
}

// Specialization for int
template<>
SinglyLinkedList<int>::toString()
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
SinglyLinkedList<string>::toString()
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

template<typename T>
int SinglyLinkedList<T>::count()
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
Node<T>* SinglyLinkedList<T>::fetchNode(T value)
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
SinglyLinkedList<T>::addNodeAfter(Node<T>* n, Node<T>* newNode)
{
	newNode->next = n->next;
	n->next = newNode;
}

template<typename T>
SinglyLinkedList<T>::addNodeBeginning(Node<T>* newNode)
{
	if(isEmpty())
	{
		newNode->next = NULL;
		head = newNode;
	}
	else
	{
		newNode->next = head;
		head = newNode;
	}
}

template<typename T>
SinglyLinkedList<T>::removeNode(T value)
{
	Node<T>* current = head;
	Node<T>* previous;
	
	// Check if list has elements
	if(!isEmpty()){
		while(current != 0) {
			// End of list (as currently head and next is null)
			if(current->next == 0)
			{
				delete current->next;
				head = NULL;
			}
			// Going through
			else if(current->next->data == value)
			{
				Node<T>* temp = current->next; // As previous will change the value of current->next
				previous = current;
				previous->next = current->next->next;
				
				delete temp;
				return 1;
			}
			current = current->next;
		}
	}
	
	return 0;
}

template<typename T>
SinglyLinkedList<T>::reverse()
{
	
}

template<typename T>
bool SinglyLinkedList<T>::isEmpty()
{
	return head == NULL;
}

template class SinglyLinkedList<int>;
template class SinglyLinkedList<string>;