#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node
{
	public:
		int data;
		Node *left;
		Node *right;
		
		Node(int);
		~Node();
		const Node* operator=(const Node*);
		
		int getData();
		Node* getLeft();
		setLeft(Node*);
		Node* getRight();
		setRight(Node*);
};

#endif // NODE_H