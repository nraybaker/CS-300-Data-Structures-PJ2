/***************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #2
*/
#include "bst.hpp"
#include <queue>
#include <iostream>
#include <fstream>
using namespace std;

//default constructor
BST::BST(information* arry)
{
	root = NULL;
	traversed_arry = arry;
	passes = 0;
	index = 0;
}

//destructor
BST::~BST()
{
	destroy_tree(root);
}

//returns root
Node* BST::get_root()
{
	return(root);
}

//public insert function called first and recursively inserts from there
void BST::insert(information in)
{
	passes++;
	int lvl = 0;
	if(root == NULL)
	{
		Node* node_ptr = new Node(in, lvl);
		root = node_ptr;
	}
	else
	{
		insert(in, root, lvl);
	}	
}

//private insert function to continue inserting
void BST::insert(information in, Node* leaf, int lvl)
{
	passes++;
	lvl++;
	if(in.key <= leaf -> get_key())
	{
		if(leaf -> get_left() != NULL)
		{
			insert(in, leaf -> get_left(), lvl);
		}
		else
		{
			Node* node_ptr = new Node(in, lvl);
			leaf -> set_left(node_ptr);
		}
	}
	else
	{
		if(leaf -> get_right() != NULL)
		{
			insert(in, leaf -> get_right(), lvl);
		}	
		else
		{
			Node* node_ptr = new Node(in, lvl);
			leaf -> set_right(node_ptr);
		}
	}
}

information* BST::get_array()
{
	return(traversed_arry);
}

//traverse tree in inorder
void BST::traverse_inorder(Node* leaf)
{
	if(leaf != NULL)
	{
		traverse_inorder(leaf -> get_left());
		traversed_arry[index] = leaf -> process();
		index++;
		traverse_inorder(leaf -> get_right());
	}
}

//destroys the tree
void BST::destroy_tree(Node* leaf)
{
    if(leaf != NULL)
    {
       destroy_tree(leaf -> get_left());
       destroy_tree(leaf -> get_right());
       delete(leaf);
    }
}

int BST::get_passes()
{
	return(passes);
}

