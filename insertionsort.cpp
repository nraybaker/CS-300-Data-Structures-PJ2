/*******************************************************************************
 * Author: Nathan Baker
 * Student ID: A767P375
 * Project: #2
*/
#include "insertionsort.hpp"
using namespace std;

InsertionSort::InsertionSort(int* arr, int lst)
{
	arry = arr;
	last = lst;
}

int* InsertionSort::get_array()
{
	int* a = arry;
	return(a);
}

int InsertionSort::get_passes()
{
	return(passes);
}

void InsertionSort::exchange(int exchange_index_1, int exchange_index_2)
{
	int temp = arry[exchange_index_1];
	arry[exchange_index_1] = arry[exchange_index_2];
	arry[exchange_index_2] = temp;
}

void InsertionSort::isort()
{
	int current = 0;
	int temp;
	int walker;
	while(current != last)
	{
		walker = current;
		while((walker > 0) && (arry[walker] < arry[walker - 1]))
		{
			exchange(walker, walker - 1);
			walker--;
			passes++;
		}
		current++;
		passes++;
	}
}

