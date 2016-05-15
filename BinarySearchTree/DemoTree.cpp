/*
* g++ -std=c++0x -g3 Node.cpp BinarySearchTree.cpp DemoTree.cpp -o DemoTree
*/

#include "BinarySearchTree.h"

using namespace std;

int main()
{
	BinarySearchTree* tree = new BinarySearchTree();
	Node* root = tree->insert(NULL, 3);
	
	tree->insert(root, 2);
	tree->insert(root, 4);
	tree->insert(root, 5);
	tree->insert(root, 1);
	
	tree->printPreOrder(root);
	cout << endl;
	tree->printInOrder(root);
	cout << endl;
	tree->printPostOrder(root);
	cout << endl;
	cout << "\nNumber of nodes: " << to_string(tree->countNodes(root)) << endl;
	cout << "Minimum value of tree: " << to_string(tree->getMin(root)) << endl;
	cout << "Maximum value of tree: " << to_string(tree->getMax(root)) << endl;
	
	delete tree;
}
