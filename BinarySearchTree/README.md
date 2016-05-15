This code is a Binary Search Tree in C++. This implementation can be improved with more methods
but here I chose to focus on the main functions such as inserting, printing in pre-in-post orders, printing the
min and max values and counting the number of nodes in the tree.

A BST is made of nodes where each sub-tree will have maximum two children: one left and one right.
The inferior values go to the left of the root and the superior values go to the right of it.
This exercise if very good to implement recursity (function calling itself).
<br /><br />

<b>Pre-order</b>: Displaying the root, then the left child and finally the right child.<br/>
<b>In-order</b>: Displaying the left child, then the root and finally the right child.<br />
<b>Post-order</b>: Displaying the left child, then the right child and finally the root.<br />

<br /><br />

The output of the current demo is:<br />
<br />
3 2 1 4 5<br />
1 2 3 4 5<br />
1 2 5 4 3<br />
<br /><br />
Number of nodes: 5<br />
Minimum value of tree: 1<br />
Maximum value of tree: 5<br />
<br /><br />
To verify the pre/in/post order functions, I have used this website: http://visualgo.net/bst in order to have a <br/>
visual representation of the tree.
