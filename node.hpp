/*******************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #2
	 
	 
	Description of the problem:
		This node class is used to define the properties of the nodes in the
		binary search tree

	Psuedo Code:
	Class Name: Node

		Data:
			info - the information to store in the node
			level - keeps track of the nodes level
			left - the left node pointer
			right - the right node pointer
	
		Mutator Functions:
		
			Function: set_left
				mutator function to set the left pointer to some other node
				Input: where the point should point to
				Outputs: None
				Return: N/A (Just sets the pointer)
				 
			Function: set_right
				mutator function to set a right pointer to some other node
				Input: The node to set the pointer to
				Output: None
				Return: N/A (Just sets the pointer)
				
			Function: set_info
				mutator function to set the info of the node
				Input: the phone number to set the node's number to
				Output: None
				Return: None
			
		
		Accesor Functions:
		
			Funtion: get_left
				Accessor function get the left node the node is pointing to
				Input: None
				Output: None
				Return: Memory location of the node left of the current node
					in the BST
			
			Function: get_right
				Accessor function to access the location of the node right
					of the current node in the BST
				Input: None
				Output: Node
				Return: Memory location of the node right of current node in the BST
			
			Function: get_key
				Accessor function to get the key in the info of the node
				Input: None
				Output: None
				Return:	the key in the info in the node

			Function: get_data
				Accessor function to get the data in the info of the node
				Input: None
				Output: None
				Return: the data in the info in the node
				
			Function: get_level
				Accessor function to get the level of the node
				Input: None
				Output: None
				Return: the level of the node
		
		
		Class Functions:
			Function: Node
				constructor
				Inputs: info to put into the node; level of the node
				Outputs: None
				Return: N/A
					called by BST to create a node

			Function: compare_number
				Compare number against the key in the node
				Inputs: a second info to compare with the info in the current node
				Outputs: None
				Return: 1 if compare key is greater than node info key
						0 if compare key is equal to the node info key
					   -1 if compare key is less than the node info key
			
			Function: process
				function that return the info in the node
				Inputs: None
				Outputs: None
				Return: N/A - Called by traverse inorder to sort the array
*/	
#include <iostream>
using namespace std;
typedef long long phone_number;

#ifndef _struct_information
#define _struct_information
struct information
{
	int key;
	double data;
};
#endif

#ifndef NODE_H
#define NODE_H
//Node class
class Node
{
	//Data for Node class
	information info;
	int level;
	Node *left;
	Node *right;
public:
	Node(information in, int lvl);
	void set_left(Node *ptr);
	void set_right(Node *ptr);
	void set_info(information in);
	Node *get_left();
	Node *get_right();
	int get_key();
	double get_data();
	int get_level();
	int compare_info(information info_compare);
	information process();
};
#endif
