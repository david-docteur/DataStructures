/*
* g++ -std=c++0x -g3 Node.cpp DoublyLinkedList.cpp DemoDLL.cpp -o DemoDLL
*/

#include "DoublyLinkedList.h"

using namespace std;

int main()
{
	cout << "\nList of ints:" << endl;
	
	DoublyLinkedList<int>* dll = new DoublyLinkedList<int>();
	Node<int>* n = new Node<int>(1);
	Node<int>* n2 = new Node<int>(2);
	Node<int>* n3 = new Node<int>(3);
	Node<int>* n4 = new Node<int>(4);
	Node<int>* n5 = new Node<int>(5);
	
	dll->addNodeBeginning(n);
	dll->addNodeAfter(n, n2);
	dll->addNodeAfter(n2, n4);
	dll->addNodeAfter(n4, n3);
	dll->toString();
	cout << "Position of node 3: " << to_string(dll->getPosition(n3)) << endl;
	dll->toStringReverse();
	dll->removeNode(2);
	dll->toString();
	dll->removeNode(4);
	dll->toString();
	dll->removeNode(3);
	dll->toString();
	dll->addNodeBeginning(n5);
	dll->toString();
	dll->removeNode(1);
	dll->toString();
	dll->removeNode(5);
	dll->toString();
	Node<int>* n6 = new Node<int>(6);
	dll->addNodeBeginning(n6);
	dll->toString();
	
	delete dll;
	
	cout << "\nList of strings:" << endl;
	
	DoublyLinkedList<string>* dlls = new DoublyLinkedList<string>();
	Node<string>* ns = new Node<string>("one");
	Node<string>* n2s = new Node<string>("two");
	Node<string>* n3s = new Node<string>("three");
	Node<string>* n4s = new Node<string>("four");
	Node<string>* n5s = new Node<string>("five");
	
	dlls->addNodeBeginning(ns);
	dlls->addNodeAfter(ns, n2s);
	dlls->addNodeAfter(n2s, n4s);
	dlls->addNodeAfter(n4s, n3s);
	dlls->toString();
	dlls->toStringReverse();
	dlls->removeNode("two");
	dlls->toString();
	dlls->removeNode("four");
	dlls->toString();
	dlls->removeNode("three");
	dlls->toString();
	dlls->addNodeBeginning(n5s);
	dlls->toString();
	dlls->removeNode("one");
	dlls->toString();
	dlls->removeNode("five");
	dlls->toString();
	Node<string>* n6s = new Node<string>("six");
	dlls->addNodeBeginning(n6s);
	dlls->toString();
	
	delete dlls;
}