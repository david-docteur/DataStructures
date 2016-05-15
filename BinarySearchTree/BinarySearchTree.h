#include "Node.h"

class BinarySearchTree
{		
	public:
		// The root of the tree (first element)
		Node* root;
		
		// Default Constructor
		BinarySearchTree();
		// Destructor
		~BinarySearchTree();
		
		// Check if the tree is empty
		bool isEmpty();
		// Search a specific node
		Node* search(Node*, int value);
		// Insert a node in the tree
		Node* insert(Node*, int value);
		// Print root -> left -> right
		void printPreOrder(Node*);
		// Print left -> root -> right
		void printInOrder(Node*);
		// Print left -> right -> root
		void printPostOrder(Node*);
		// Return if node is root
		bool isRoot(Node*);
		// Returns the numbers of nodes in the tree
		int countNodes(Node*);
		// Returns the node having the minimum value (bottom left)
		int getMin(Node*);
		// Returns the node having the maximum value (bottom right)
		int getMax(Node*);
};

