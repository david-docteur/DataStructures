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

void BinarySearchTree::printPreOrder(Node* node)
{	
	if(node != 0)
	{
		cout << to_string(node->data) << " ";
		printPreOrder(node->left);
		printPreOrder(node->right);
	}
}

void BinarySearchTree::printInOrder(Node* node)
{
	if(node != 0)
	{
		printInOrder(node->left);
		cout << to_string(node->data) << " ";
		printInOrder(node->right);
	}
}

void BinarySearchTree::printPostOrder(Node* node)
{
	if(node != 0)
	{
		printPostOrder(node->left);
		printPostOrder(node->right);
		cout << to_string(node->data) << " ";
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