/*******************************************************************************
 * Author: Sonya Wolf
 * Student ID: M886Y662
 * Project: #2

Class Name: BubbleSort
    Data:
        arry - the array we want to sort
        last - the last of the array we want to sort
        passes - the number of passes the algorithm made in sorting the array

Accessor Functions:
    Function: get_arry
	Accessor function to return the array stored in the object
        Input: None
        Output: None
        Return: the array stored in the object

    Function: get_passes
	Accessor function to return the number of passes the sort made
        Input: None
        Output: None
        Return:	the number of passes the sort made

Class Functions
    Function: BubbleSort
        Constructor
        Input: the information array and the last in the array
        Output: None
        Return: N/A - Just creates a BubbleSort Object

    Function: b_exchange
	exchanges the key and data of two indexes in the array
        Input: the two indicies to exchange
        Output: N/A
        Return: N/A - Just swaps the key and data of the two indicies

    Function: b_sort
	calls the bubble sort on the array stored in the object
        Input:	N/A
        Output: N/A
        Return: N/A - Just sorts the array in the object
*/
#ifndef _struct_information
#define _struct_information
struct information
{
	int key;
	double data;
};
#endif

#ifndef _BUBBLESORT_
#define _BUBBLESORT_

class BubbleSort
{
    information* arry;
    int last;
    int passes;
public:
    BubbleSort(information* arr, int l);
    int get_passes();
    information* get_arry();
    void b_exchange(int swap, int swap1);
    void b_sort();
};
#endif
