#include <string>
#include "Node.h"

using namespace std;

Node::Node(int value)
{
	data = value;
	left = NULL;
	right = NULL;
}

Node::~Node()
{
	left = NULL;
	right = NULL;
}

const Node* Node::operator=(const Node* n)
{
	cout << "Calling Node Assignment Operator." << endl;
	
	if(n == this)
		return this;
	
	data = n->data;
	if(n->left)
		left = n->left;
	if(n->right)
		right = n->right;
	
	return this;
}

int Node::getData()
{
	return data;
}

Node* Node::getLeft()
{
	return left;
}

Node::setLeft(Node* n)
{
	left = n;
}

Node* Node::getRight()
{
	return right;
}

Node::setRight(Node* n)
{
	right = n;
}
