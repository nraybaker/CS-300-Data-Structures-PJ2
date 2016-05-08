/*******************************************************************************
 * Author: Sonya Wolf
 * Student ID: M886Y662
 * Project: #2
*/
#include "selection.hpp"

SelectionSort::SelectionSort(information* arr, int l)
{
	arry = arr;
    last = l;
    passes = 0;
}

int SelectionSort::get_passes()
{
    return passes;
}

information* SelectionSort::get_arry()
{
    information* b = arry;
    return b;
}

void SelectionSort::s_exchange(int swap, int swap1)
{
    int temp = arry[swap1].key;
    double temp_data = arry[swap1].data;
    
    arry[swap1].key = arry[swap].key;
    arry[swap1].data = arry[swap].data;
    
    arry[swap].key = temp;
    arry[swap].data = temp_data;
}

void SelectionSort::sel_sort()
{
    int min;
    int walker;
    for(int current = 0; current < last; current++)
    {
        min = current;
        walker = current + 1;
        for(; walker <= last; walker++)
        {
            if (arry[walker].key < arry[min].key)
            {
                min = walker;
            }
            passes++;
        }
        s_exchange(current, min);
    	passes++;
    }
}
