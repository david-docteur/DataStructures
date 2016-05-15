#include "BinarySearchTree.h"

using namespace std;

BinarySearchTree::BinarySearchTree()
{
	root = NULL;
}

BinarySearchTree::~BinarySearchTree()
{
	root = NULL;
}

bool BinarySearchTree::isEmpty()
{
	return root == NULL;
}

bool BinarySearchTree::isRoot(Node* node)
{
		return node == root;
}

Node* BinarySearchTree::search(Node* node, int value)
{
	// If tree is null
	if(node == NULL)
	{
		root = new Node(value);
		return root;
	}
	
	// If current node is what we are looking for
	if(node->data == value)
		return node;
	
	// Need to browse
	if(value < node->data)
		return search(node->left, value);
	else
		return search(node->right, value);
	
}

Node* BinarySearchTree::insert(Node* node, int value)
{
	if(node == 0)
		return new Node(value);
	
	if(value <= node->data)
	{
		node->left = insert(node->left, value);
	}
	else
	{
		node->right = insert(node->right, value);
	}
	
	return node;
}

void BinarySearchTree::printPreOrder(Node* root)
{	
	if(root != 0)
	{
		cout << to_string(root->data) << endl;
		printPreOrder(root->left);
		printPreOrder(root->right);
	}
}

string BinarySearchTree::printInOrder(Node* root)
{
	if(root != 0)
	{
		printInOrder(root->left);
		cout << to_string(root->data) <<endl;
		printInOrder(root->right);
	}
}

string BinarySearchTree::printPostOrder(Node* root)
{
	if(root != 0)
	{
		printInOrder(root->left);
		printInOrder(root->right);
		cout << to_string(root->data) <<endl;
	}
}

int BinarySearchTree::countNodes(Node* root)
{
	// Already count 1 for the root
	int counter = 1;
	if(root == 0)
		return 0;
	else
	{
		counter += countNodes(root->left);
		counter += countNodes(root->right);
		return counter;
	}
}

int BinarySearchTree::getMin(Node* root)
{
	Node* current = root;
	if(root == 0)
	{
		return -1;
	}
	else
	{
		while(current->left != 0)
		{
			current = current->left;
		}
	}
	
	return current->data;
}

int BinarySearchTree::getMax(Node* root)
{
	Node* current = root;
	if(root == 0)
	{
		return -1;
	}
	else
	{
		while(current->right != 0)
		{
			current = current->right;
		}
	}
	
	return current->data;
}