/*
* C:\Users\David\Desktop>g++ -std=c++0x -g3 Node.cpp SinglyLinkedList.cpp DemoSLL.cpp -o DemoSLL
*/

#include "SinglyLinkedList.h"

using namespace std;

int main()
{
	cout << "\nList of ints:" << endl;
	
	SinglyLinkedList<int>* sll = new SinglyLinkedList<int>();
	Node<int>* n = new Node<int>(1);
	Node<int>* n2 = new Node<int>(2);
	Node<int>* n3 = new Node<int>(3);
	Node<int>* n4 = new Node<int>(4);
	Node<int>* n5 = new Node<int>(5);
	
	sll->addNodeBeginning(n);
	sll->addNodeAfter(n, n2);
	sll->addNodeAfter(n2, n3);
	sll->addNodeAfter(n3, n4);
	sll->toString();
	sll->removeNode(2);
	sll->toString();
	cout << "Position of node 3: " << to_string(sll->getPosition(n3)) << endl;
	sll->reverse();
	sll->toString();
	sll->removeNode(4);
	sll->toString();
	sll->removeNode(3);
	sll->toString();
	sll->addNodeBeginning(n5);
	sll->toString();
	sll->removeNode(1);
	sll->toString();
	sll->removeNode(5);
	sll->toString();
	Node<int>* n6 = new Node<int>(6);
	sll->addNodeBeginning(n6);
	sll->toString();
	
	delete sll;
	
	cout << "\nList of strings:" << endl;
	
	SinglyLinkedList<string>* slls = new SinglyLinkedList<string>();
	Node<string>* ns = new Node<string>("one");
	Node<string>* n2s = new Node<string>("two");
	Node<string>* n3s = new Node<string>("three");
	Node<string>* n4s = new Node<string>("four");
	Node<string>* n5s = new Node<string>("five");
	
	slls->addNodeBeginning(ns);
	slls->addNodeAfter(ns, n2s);
	slls->addNodeAfter(n2s, n3s);
	slls->addNodeAfter(n3s, n4s);
	slls->toString();
	slls->removeNode("two");
	slls->toString();
	slls->removeNode("four");
	slls->toString();
	slls->removeNode("three");
	slls->toString();
	slls->addNodeBeginning(n5s);
	slls->toString();
	slls->removeNode("one");
	slls->toString();
	slls->removeNode("five");
	slls->toString();
	Node<string>* n6s = new Node<string>("six");
	slls->addNodeBeginning(n6s);
	slls->toString();
	
	delete slls;
}