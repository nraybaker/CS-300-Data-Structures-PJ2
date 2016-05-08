/*******************************************************************************
 * Author: Sonya Wolf
 * Student ID: M886Y662
 * Project: #2
*/
#include "bubble.hpp"

BubbleSort::BubbleSort(information* arr, int l)
{
    arry = arr;
    last = l;
    passes = 0;
}

int BubbleSort::get_passes()
{
    return passes;
}

information* BubbleSort::get_arry()
{
    information* b = arry;
    return b;
}

void BubbleSort::b_exchange(int swap, int swap1)
{
    int temp = arry[swap1].key;
    double temp_data = arry[swap1].data;
    
    arry[swap1].key = arry[swap].key;
    arry[swap1].data = arry[swap].data;
    
    arry[swap].key = temp;
    arry[swap].data = temp_data;
}

void BubbleSort::b_sort()
{
	int walker;
	
    int current = 0;
    bool sorted = false;
	while((current <= last) & (sorted == false))
    {
    	walker = last;
    	sorted = true;
        while(walker > current)
        {
            if (arry[walker].key <  arry[walker - 1].key)
            {
            	sorted = false;
                b_exchange(walker, walker - 1);
            }
            walker--;
            passes++;
    	}
        current++;
        passes++;
    }
}
