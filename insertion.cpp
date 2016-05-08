/*******************************************************************************
 * Author: Nathan Baker
 * Student ID: A767P375
 * Project: #2
*/
#include "insertion.hpp"
using namespace std;

InsertionSort::InsertionSort(information* arr, int lst)
{
	arry = arr;
	last = lst;
	passes = 0;
}

information* InsertionSort::get_array()
{
	information* a = arry;
	return(a);
}

long InsertionSort::get_passes()
{
	return(passes);
}

void InsertionSort::exchange(int exchange_index_1, int exchange_index_2)
{
	int temp = arry[exchange_index_1].key;
	double temp_data = arry[exchange_index_1].data;
	
	arry[exchange_index_1].key = arry[exchange_index_2].key;
	arry[exchange_index_1].data = arry[exchange_index_2].data;
	
	arry[exchange_index_2].key = temp;
	arry[exchange_index_2].data = temp_data;
}

void InsertionSort::isort()
{
	int current = 0;
	int walker;
	while(current != last)
	{
		walker = current;
		while((walker > 0) && (arry[walker].key < arry[walker - 1].key))
		{
			exchange(walker, walker - 1);
			walker--;
			passes++;
		}
		current++;
		passes++;
	}
}

