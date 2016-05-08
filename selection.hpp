/*******************************************************************************
 * Author: Sonya Wolf
 * Student ID: M886Y662
 * Project: #2

Class Name: SelectionSort
    Data:
        arry - the array to sort
        last - the last in the array
        passes - keeps track of the number of passes the sort made

Accessor Functions:
    Function: get_array
        Input: None
        Output: None
        Return: the array in the object

    Function: get_passes
        Input: None
        Output: None
        Return: the passes the sort made

    Function: SelectionSort
        Constructor
        Input: arry, last
        Output: None
        Return: N/A

    Function: s_exchange
	Used by the algorithm to exchange data in the array
        Input: two indexes who data need swapped
        Output: N/A
        Return: N/A

    Function: s_sort	
	Function to call to begin sorting the array
        Input: None
        Output: None
        Return: N/A

Class Functions:

*/
#ifndef _struct_information
#define _struct_information
struct information
{
	int key;
	double data;
};
#endif

#ifndef _SELECTIONSORT_
#define _SELECTIONSORT_

class SelectionSort
{
    information* arry;
    int last;
    int passes;
public:
    SelectionSort(information* arr, int l);
    void s_exchange(int swap, int swap1);
    int get_passes();
    information* get_arry();
    void sel_sort();
};
#endif
