/*******************************************************************************
 * Author: Nathan Baker
 * Student ID: A767P375
 * Project: #2
*/
#include "quick.hpp"
#include <iostream>
using namespace std;

QuickSort::QuickSort(information* arr, int l, int r)
{
	minSize = 50;
	arry = arr;
	left = l;
	right = r;
	passes = 0;
}

int QuickSort::get_passes()
{
	return(passes);
}

information* QuickSort::get_array()
{
	information* a = arry;
	return(a);
}

void QuickSort::exchange(int exchange_index_1, int exchange_index_2)
{
	int temp = arry[exchange_index_1].key;
	double temp_data = arry[exchange_index_1].data;
	
	arry[exchange_index_1].key = arry[exchange_index_2].key;
	arry[exchange_index_1].data = arry[exchange_index_2].data;
	
	arry[exchange_index_2].key = temp;
	arry[exchange_index_2].data = temp_data;
}

void QuickSort::insertion_Sort(int l, int r)
{
	int current = l;
	int walker;
	while(current != r)
	{
		walker = current;
		while((walker > 0) && (arry[walker].key < arry[walker - 1].key))
		{
			exchange(walker, walker - 1);
			walker--;
		}
		current++;
	}
}

void QuickSort::medianLeft(int l, int r)
{
	int middle = l + ((r - l)/2);
	
	if(!(arry[l].key < arry[middle].key))
		exchange(l, middle);
	
	if(!(arry[l].key < arry[r].key))
		exchange(l, r);
	
	if(!(arry[middle].key < arry[r].key))
		exchange(middle, r);
		
	exchange(l, middle);
}

void QuickSort::qs()
{
	if((right - left) > minSize)
	{
		medianLeft(left, right);
		int pivot = left;
		int sortLeft = left + 1;
		int sortRight = right;
		
		while(sortLeft <= sortRight)
		{
			while(arry[sortLeft].key < arry[pivot].key)
			{
				sortLeft++;
			}
			while(arry[sortRight].key >= arry[pivot].key)
			{
				sortRight--;
			}
			if(sortLeft <= sortRight)
			{
				exchange(sortLeft, sortRight);
				sortLeft++;
				sortRight--;
			}
			passes++;
		}
		
		exchange(sortLeft - 1, left);
		exchange(pivot, sortLeft - 1);
		
		if(left < sortRight)
			qs(left, sortRight);
			
		if(sortRight < right)
			qs(sortRight, right);
	}
	
	else
		insertion_Sort(left, right);
}

void QuickSort::qs(int l, int r)
{
	if((r - l) > minSize)
	{
		medianLeft(l, r);
		int pivot = l;
		int sortLeft = l + 1;
		int sortRight = r;
		
		while(sortLeft <= sortRight)
		{
			while(arry[sortLeft].key < arry[pivot].key)
			{
				sortLeft++;
			}
			while(arry[sortRight].key >= arry[pivot].key)
			{
				sortRight--;
			}
			if(sortLeft <= sortRight)
			{
				exchange(sortLeft, sortRight);
				sortLeft++;
				sortRight--;
			}
			passes++;
		}
		
		exchange(sortLeft - 1, l);
		exchange(pivot, sortLeft - 1);
		
		if(l < sortRight)
			qs(l, sortRight);
			
		if(sortRight < r)
			qs(sortRight, r);
	}
	
	else
		insertion_Sort(l, r);
}


