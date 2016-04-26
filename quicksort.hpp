/*******************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #2
	 
	 
	Description of the problem:
		This QuickSort class is used to sort an array using the quicksort algorithm

	Psuedo Code:
	Class Name: QuickSort

		Data:
			Arry - pointer to the array to sort
			Left - Index of left most point in array
			Right - Index of right most point in array
			Passes - Keeps track of the number of passes made on the data
			minSize - minimum size of array to stop using quicksort and start insertion sort
	
		Accesor Functions:
		
			Funtion: get_array
				Accessor function to get a pointer to the array in the QuickSort object
				Input: None
				Output: None
				Return: Pointer to the array in the QuickSort object
			
			Function: get_passes
				Accessor function to get the number of passes the sort has made
				Input: None
				Output: Node
				Return: The number of passes the sort has mad
		
		
		Class Functions:
			Function: QuickSort
				constructor that sets arry to a given array (the array to sort)
					left to the left point passed in
					right to the right point passed in
				Inputs: arry, left and right
				Outputs: None
				Return: N/A
					arry = array to sort
					left = left most point in array to sort
					right = right most point in array to sort
				
			Function: qs (public)
				Starts the quicksort algorithm to sort the array
				Inputs: None
				Outputs: None
				Return: None - Just sorts the array in the object
							 
			Function: qs (private)
				Private function used for the recursion part of the quicksort
					algorithm
				Inputs: the left and right index of the subset of the array to
					call the quicksort on
				Outputs: None
				Return: None - just sorts the part of the array with the left and
					right indices
			
			Function: medianLeft (private)
				function to find the pivot and organize the left, middle, and right
					points of the array to sort
				Inputs: None
				Outputs: None
				Return: None - slightly rearranges the array according to the specifications
					of the quicksort algorithm and puts the pivot in the correct place
					
			Function: exchange (private)
				function to exchange the data of two indices in the array
				Inputs: the two indices of the data to swap
				Outputs: None
				Return: None - just swaps the data of the two indices
				
			Function: insertion_Sort (private)
				function to perform a straight insertion sort when the data becomes
					small enough
				Inputs: the left and right indices of the array to perform the 
					insertion sort on
				Outputs: NOne
				Return: None - just sorts the small portion the array with the insertion
					sort
*/
#include <iostream>
using namespace std;

class QuickSort
{
	int* arry;
	int left;
	int right;
	int passes;
	int minSize;
	
	void medianLeft(int l, int r);
	void exchange(int exchange_index_1, int exchange_index_2);
	void qs(int l, int r);
	void insertion_Sort(int l, int r);
	
public:
	QuickSort(int a[], int left, int right);
	int get_passes();
	int* get_array();
	void qs();
};
