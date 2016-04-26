/*******************************************************************************
 * Author: Nathan Baker
 * Student ID: A767P375
 * Project: #2
*/
//temporary includes to ease testing
//will need to be altered for final version
#include "quicksort.cpp"
#include "insertionsort.cpp"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int arry5000[5000];
	
	for(int i = 0; i<5000; i++)
	{
		//%100 + 1 givens random numbers between 1 and 100
		//%1000 + 1 gives random numbers between 1 and 1000
		//%5000 + 1 gives random numbers between 1 and 5000
		/*
			it is important to set this properly, if there are two many
			repeats in the array, the quicksort starts reaching worst case
			scenarios. In this cases the program will have an exception error
			caused by stack overflow. The recursive nature of quicksort could cause
			to many recursions that overflow the stack used to process the function
			calls
		*/
		arry5000[i] = rand() % 5000 + 1;
	}
	
	InsertionSort insert = InsertionSort(arry5000, 5000);
	insert.isort();
	int* b = insert.get_array();
	
	QuickSort quick = QuickSort(arry5000, 0, 4999);
	quick.qs();
	int* a = quick.get_array();
	
	
	for(int i = 0; i < 5000; i++)
	{
		cout << i << "    " << *(a + i) << endl;
	}
	
	for(int i = 0; i < 5000; i++)
	{
		cout << i << "    " << *(b + i) << endl;
	}
	cout << "QuickSort passes: " << quick.get_passes() << endl;
	cout << "InsertionSort passes: " << insert.get_passes() << endl;
	
	
	return(0);
}
