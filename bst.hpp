/*******************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #2
	 
	 
	Psuedo Code:
	Class Name: BST
	 
		Data:
			root - will point to the root
			traversed_array - the array that has been sorted
			passes - keeping track of the number of passes made
			index - keeps track of index for putting the sorted array into
				traversed_array
		 
		Class Functions:
			
			Function: BST
				Contructor
				Input: An array of information
				Output: None
				Return: NA 
					Just creates the binary search tree with root set to NULL
					passes = 0
					index = 0
					traversed_array = array of information
			
			Function: ~BST
				Deconstructor - destroys the tree
				Input: None
				Output: None
				Return: N/A 
					Destroys the tree
				
			Function: get_root
				Returns the root of the tree
				Input: None
				Output: None
				Return: root of the tree
			
			Function: insert (public)
				insert a node with data into the tree
				Input: the information to store in the node
				Output: None
				Return: None
					Starts the insert algorithm and calls the private insert
						function if needed

			Function: insert (private)
				continues insert function on a different node
				Input: information, and node to insert from
					level that keeps track of the node's level
				Output: None
				Return: None
					Used for the recursion of the insert function
								
			Function: traverse_inorder
				traverses the tree in inorder placing the data of each node into the traversed_array
				Input: the node to start the inorder traversal from
				Output: the data from the node in inorder
				Return: None
					Recursively prints the tree in inorder
				
			Function: destroy_tree (private)
				called by the ~BST destructor function to destroy the tree
				Input: the node to begin destroying the tree from
				Output: None
				Return: None
					Destroys the tree
*/
#include "node.hpp"
#ifndef _struct_information
#define _struct_information
struct information
{
	int key;
	double data;
};
#endif


#ifndef BST_H
#define BST_H
class BST
{
	Node *root;
	int passes;
	information* traversed_arry;
	int index;

	void destroy_tree(Node* leaf);
	void insert(information in, Node* leaf, int lvl);
public:
	BST(information* arry);
	~BST();
	Node* get_root();
	int get_passes();
	information* get_array();
	void insert(information in);
	void traverse_inorder(Node* leaf);
};
#endif

