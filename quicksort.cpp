/*******************************************************************************
 * Author: Nathan Baker
 * Student ID: A767P375
 * Project: #2
*/
#include "quicksort.hpp"
#include <iostream>
using namespace std;

QuickSort::QuickSort(int* arr, int l, int r)
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

int* QuickSort::get_array()
{
	int* a = arry;
	return(a);
}

void QuickSort::insertion_Sort(int l, int r)
{
	int current = l;
	int temp;
	int walker;
	while(current != r)
	{
		walker = current;
		while((walker > 0) && (arry[walker] < arry[walker - 1]))
		{
			temp = arry[walker];
			arry[walker] = arry[walker - 1];
			arry[walker - 1] = temp;
			walker--;
		}
		current++;
	}
}

void QuickSort::exchange(int exchange_index_1, int exchange_index_2)
{
	int temp = arry[exchange_index_1];
	arry[exchange_index_1] = arry[exchange_index_2];
	arry[exchange_index_2] = temp;
}

void QuickSort::medianLeft(int l, int r)
{
	int middle = l + ((r - l)/2);
	
	if(!(arry[l] < arry[middle]))
		exchange(l, middle);
	
	if(!(arry[l] < arry[r]))
		exchange(l, r);
	
	if(!(arry[middle] < arry[r]))
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
			while(arry[sortLeft] < arry[pivot])
			{
				sortLeft++;
				passes++;
			}
			while(arry[sortRight] >= arry[pivot])
			{
				sortRight--;
				passes++;
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
			while(arry[sortLeft] < arry[pivot])
			{
				sortLeft++;
				passes++;
			}
			while(arry[sortRight] >= arry[pivot])
			{
				sortRight--;
				passes++;
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


