/*******************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #2
	 
	 
	Description of the problem:
		This class is used to create an object with an array that needs to be sorted

	Psuedo Code:
	Class Name: InsertionSort

		Data:
			arry - array to sort
			last - last index of the array (size of array in this case; will
				alter by subtracting 1 to obtain actual array index)
			passes - number of passes on the data the insertion sort had to perform
			
		Accesor Functions:
			Funtion: get_array
				Accessor function get a pointer to the array in the object
				Input: None
				Output: None
				Return: a pointer to the array stored in the object
			
			Function: get_passes
				Accessor function to return the passes the insertion sort had to make
				Input: None
				Output: Node
				Return: the number of passes the insertion sort made
		
		Class Functions:
			Function: InsertionSort
				Constructor to create an InsertionSort object
				Inputs: arry and last
				Outputs: None
				Return: None - sets arry to the array passed in and last to the last
					index passed in
		
			Function: isort
				function called to perform the straight insertion sort onto the
					array passed in
				Inputs: None
				Outputs: None
				Return: None - sorts the array in the object using the insertion sort
					algorithm
			 
			Function: exchange (private)
				function used within the insertion sort to exchange the data of two
					indices
				Inputs: the two indices of the data to switch
				Outputs: None
				Return: None - just exchanges the data of the two indices passed in
*/

#ifndef _struct_information
#define _struct_information
struct information
{
	int key;
	double data;
};
#endif

#ifndef _INSERTIONSORT_
#define _INSERTIONSORT_
class InsertionSort
{
	information* arry;
	int last;
	long passes;
	
	void exchange(int exchange_index_1, int exchange_index_2);
	
public:
	InsertionSort(information arr[], int lst);
	void isort();
	information* get_array();
	long get_passes();	
};
#endif
