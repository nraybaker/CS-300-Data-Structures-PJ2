/***************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #2
*/
#include "node.hpp"
#include <iostream>
using namespace std;

//Non-default constructor
Node::Node(information in, int lvl)
{
	info = in;
	level = lvl;
	left = NULL;
	right = NULL;
}

//set_left mutator function
void Node::set_left(Node *ptr)
{
	left = ptr;
}

//set_right mutator function
void Node::set_right(Node* ptr)
{
	right = ptr;
}

//set_info mutator function
void Node::set_info(information in)
{
	info = in;
}

//get_left accessor function
Node* Node::get_left()
{
	return(left);
}

//get_right accessor function
Node* Node::get_right()
{
	return(right);
}

//get_key accessor function
int Node::get_key()
{
	return(info.key);
}

//get_data accessor function
double Node::get_data()
{
	return(info.data);
}

//get_level accessor function
int Node::get_level()
{
	return(level);
}

//compares key in node with the key of given info
int Node::compare_info(information info_compare)
{
	if(info.key < info_compare.key)
		return(1);
	else if(info.key > info_compare.key)
		return(-1);
	else
		return(0);
}

//returns info in node
information Node::process()
{
	return(info);
}



