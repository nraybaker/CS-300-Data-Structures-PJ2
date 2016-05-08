/*******************************************************************************
 * Project By: Nathan Baker (A767P375) and Sonya Wolf (M886Y662)
 * Project: #2
*/
//temporary includes to ease testing
//will need to be altered for final version
#include "node.hpp"
#include "bst.hpp"
#include "quick.hpp"
#include "insertion.hpp"
#include "bubble.hpp"
#include "selection.hpp"
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

#ifndef _struct_information
#define _struct_information
struct information
{
	int key;
	double data;
};
#endif

int main()
{
	ofstream outfile;
	srand(time(NULL));

	//STRAIGHT INSERTION SORTS
	//Straight Insertion Sort for array of 100
	information arryIns100[100];
	for(int i = 0; i < 100; i++)
	{
		arryIns100[i].key = rand() % 1000 + 1;
		arryIns100[i].data = (rand()/(double)RAND_MAX) + (rand() % 10000);
	}
	InsertionSort insert100 = InsertionSort(arryIns100, 100);
	insert100.isort();
	information* ins100 = insert100.get_array();
	outfile.open("sins100.dat", ios::trunc);
	for(int i = 0; i < 100; i++)
	{
		information x = *(ins100 + i);
		outfile << x.key << " " << x.data << endl;
	}
	outfile << "Passes: " << insert100.get_passes();
	outfile.close();
	cout << "Straight insertion sort passes on array of 100: " << insert100.get_passes() << endl;

	//Straight Insertion Sort for array of 1000
	information arryIns1000[1000];
	for(int i = 0; i < 1000; i++)
	{
		arryIns1000[i].key = rand() % 10000 + 1;
		arryIns1000[i].data = (rand()/(double)RAND_MAX) + (rand() % 10000);
	}
	InsertionSort insert1000 = InsertionSort(arryIns1000, 1000);
	insert1000.isort();
	information* ins1000 = insert1000.get_array();
	outfile.open("sins1000.dat", ios::trunc);
	for(int i = 0; i < 1000; i++)
	{
		information x = *(ins1000 + i);
		outfile << x.key << " " << x.data << endl;
	}
	outfile << "Passes: " << insert1000.get_passes();
	outfile.close();
	cout << "Straight insertion sort passes on array of 1000: " << insert1000.get_passes() << endl;
	
	//Straight Insertion sorts for array of 5000
	information arryIns5000[5000];
	for(int i = 0; i < 5000; i++)
	{
		arryIns5000[i].key = rand() % 50000 + 1;
		arryIns5000[i].data = (rand()/(double)RAND_MAX) + (rand() % 10000);
	}
	InsertionSort insert5000 = InsertionSort(arryIns5000, 5000);
	insert5000.isort();
	information* ins5000 = insert5000.get_array();
	outfile.open("sins5000.dat", ios::trunc);
	for(int i = 0; i < 5000; i++)
	{
		information x = *(ins5000 + i);
		outfile << x.key << " " << x.data << endl;
	}
	outfile << "Passes: " << insert5000.get_passes();
	outfile.close();
	cout << "Straight insertion sort passes on array of 5000: " << insert5000.get_passes() << endl;
	
	
	
	
	//QUICKSORTS
	//QuickSort for array of 100
	information arryQck100[100];
	for(int i = 0; i < 100; i++)
	{
		arryQck100[i].key = rand() % 1000 + 1;
		arryQck100[i].data = (rand()/(double)RAND_MAX) + (rand() % 10000);
	}
	QuickSort quick100 = QuickSort(arryQck100, 0, 100);
	quick100.qs();
	information* qck100 = quick100.get_array();
	outfile.open("quick100.dat", ios::trunc);
	for(int i = 0; i < 100; i++)
	{
		information x = *(qck100 + i);
		outfile << x.key << " " << x.data << endl;
	}
	outfile << "Passes: " << quick100.get_passes();
	outfile.close();
	cout << "Quicksort passes on array of 100: " << quick100.get_passes() << endl;
	
	//QuickSort for array of 1000
	information arryQck1000[1000];
	for(int i = 0; i < 1000; i++)
	{
		arryQck1000[i].key = rand() % 10000 + 1;
		arryQck1000[i].data = (rand()/(double)RAND_MAX) + (rand() % 10000);
	}
	QuickSort quick1000 = QuickSort(arryQck1000, 0, 1000);
	quick1000.qs();
	information* qck1000 = quick1000.get_array();
	outfile.open("quick1000.dat", ios::trunc);
	for(int i = 0; i < 1000; i++)
	{
		information x = *(qck1000 + i);
		outfile << x.key << " " << x.data << endl;
	}
	outfile << "Passes: " << quick1000.get_passes();
	outfile.close();
	cout << "Quicksort passes on array of 1000: " << quick1000.get_passes() << endl;
	
	//QuickSort for array of 5000
	information arryQck5000[5000];
	for(int i = 0; i < 5000; i++)
	{
		arryQck5000[i].key = rand() % 50000 + 1;
		arryQck5000[i].data = (rand()/(double)RAND_MAX) + (rand() % 10000);
	}
	QuickSort quick5000 = QuickSort(arryQck5000, 0, 5000);
	quick5000.qs();
	information* qck5000 = quick5000.get_array();
	outfile.open("quick5000.dat", ios::trunc);
	for(int i = 0; i < 5000; i++)
	{
		information x = *(qck5000 + i);
		outfile << x.key << " " << x.data << endl;
	}
	outfile << "Passes: " << quick5000.get_passes();
	outfile.close();
	cout << "Quicksort passes on array of 5000: " << quick5000.get_passes() << endl;
	
	
	
	
	//BUBBLE SORTS
	//Bubble Sort on array of 100
	information arryBub100[100];
	for(int i = 0; i < 100; i++)
	{
		arryBub100[i].key = rand() % 1000 + 1;
		arryBub100[i].data = (rand()/(double)RAND_MAX) + (rand() % 10000);
	}
	BubbleSort bubble100 = BubbleSort(arryBub100, 100);
	bubble100.b_sort();
	information* bub100 = bubble100.get_arry();
	outfile.open("bub100.dat", ios::trunc);
	for(int i = 0; i < 100; i++)
	{
		information x = *(bub100 + i);
		outfile << x.key << " " << x.data << endl;
	}
	outfile << "Passes: " << bubble100.get_passes();
	outfile.close();
	cout << "Bubble sort passes on array of 100: " << bubble100.get_passes() << endl;
	
	//Bubble Sort for array of 1000
	information arryBub1000[1000];
	for(int i = 0; i < 1000; i++)
	{
		arryBub1000[i].key = rand() % 10000 + 1;
		arryBub1000[i].data = (rand()/(double)RAND_MAX) + (rand() % 10000);
	}
	BubbleSort bubble1000 = BubbleSort(arryBub1000, 1000);
	bubble1000.b_sort();
	information* bub1000 = bubble1000.get_arry();
	outfile.open("bub1000.dat", ios::trunc);
	for(int i = 0; i < 1000; i++)
	{
		information x = *(bub1000 + i);
		outfile << x.key << " " << x.data << endl;
	}
	outfile << "Passes: " << bubble1000.get_passes();
	outfile.close();
	cout << "Bubble sort passes on array of 1000: " << bubble1000.get_passes() << endl;
	
	//Bubble Sort for array of 5000
	information arryBub5000[5000];
	for(int i = 0; i < 5000; i++)
	{
		arryBub5000[i].key = rand() % 50000 + 1;
		arryBub5000[i].data = (rand()/(double)RAND_MAX) + (rand() % 10000);
	}
	BubbleSort bubble5000 = BubbleSort(arryBub5000, 5000);
	bubble5000.b_sort();
	information* bub5000 = bubble5000.get_arry();
	outfile.open("bub5000.dat", ios::trunc);
	for(int i = 0; i < 5000; i++)
	{
		information x = *(bub5000 + i);
		outfile << x.key << " " << x.data << endl;
	}
	outfile << "Passes: " << bubble5000.get_passes();
	outfile.close();
	cout << "Bubble sort passes on array of 5000: " << bubble5000.get_passes() << endl;
	
	
	
	
	
	
	//SELECTION SORTS
	//Selection Sort for array of 100
	information arrySel100[100];
	for(int i = 0; i < 100; i++)
	{
		arrySel100[i].key = rand() % 1000 + 1;
		arrySel100[i].data = (rand()/(double)RAND_MAX) + (rand() % 10000);
	}
	SelectionSort select100 = SelectionSort(arrySel100, 100);
	select100.sel_sort();
	information* sel100 = select100.get_arry();
	outfile.open("sels100.dat", ios::trunc);
	for(int i = 0; i < 100; i++)
	{
		information x = *(sel100 + i);
		outfile << x.key << " " << x.data << endl;
	}
	outfile << "Passes: " << select100.get_passes();
	outfile.close();
	cout << "Selection sort passes on array of 100: " << select100.get_passes() << endl;
	
	//Selection Sort for array of 1000
	information arrySel1000[1000];
	for(int i = 0; i < 1000; i++)
	{
		arrySel1000[i].key = rand() % 10000 + 1;
		arrySel1000[i].data = (rand()/(double)RAND_MAX) + (rand() % 10000);
	}
	SelectionSort select1000 = SelectionSort(arrySel1000, 1000);
	select1000.sel_sort();
	information* sel1000 = select1000.get_arry();
	outfile.open("sels1000.dat", ios::trunc);
	for(int i = 0; i < 1000; i++)
	{
		information x = *(sel1000 + i);
		outfile << x.key << " " << x.data << endl;
	}
	outfile << "Passes: " << select1000.get_passes();
	outfile.close();
	cout << "Selection sort passes on array of 1000: " << select1000.get_passes() << endl;
	
	//Selection Sort for array of 5000
	information arrySel5000[5000];
	for(int i = 0; i < 5000; i++)
	{
		arrySel5000[i].key = rand() % 50000 + 1;
		arrySel5000[i].data = (rand()/(double)RAND_MAX) + (rand() % 10000);
	}
	SelectionSort select5000 = SelectionSort(arrySel5000, 5000);
	select5000.sel_sort();
	information* sel5000 = select5000.get_arry();
	outfile.open("sels5000.dat", ios::trunc);
	for(int i = 0; i < 5000; i++)
	{
		information x = *(sel5000 + i);
		outfile << x.key << " " << x.data << endl;
	}
	outfile << "Passes: " << select5000.get_passes();
	outfile.close();
	cout << "Selection sort passes on array of 5000: " << select5000.get_passes() << endl;
	
	
	//Binary Search Tree Sorts
	//BST for array of 100
	information arryBst100[100];
	for(int i = 0; i < 100; i++)
	{
		arryBst100[i].key = rand() % 1000 + 1;
		arryBst100[i].data = (rand()/(double)RAND_MAX) + (rand() % 10000);
	}
	BST bst100tree = BST(arryBst100);
	for(int i = 0; i < 100; i++)
	{
		bst100tree.insert(arryBst100[i]);
	}
	bst100tree.traverse_inorder(bst100tree.get_root());
	information* bst100 = bst100tree.get_array();
	outfile.open("bst100.dat", ios::trunc);
	for(int i = 0; i < 100; i++)
	{
		information x = *(bst100 + i);
		outfile << x.key << " " << x.data << endl;
	}
	outfile << "Passes: " << bst100tree.get_passes();
	outfile.close();
	cout << "BST Sort Passes on array of 100: " << bst100tree.get_passes() << endl;
	
	//BST for array of 1000
	information arryBst1000[1000];
	for(int i = 0; i < 1000; i++)
	{
		arryBst1000[i].key = rand() % 10000 + 1;
		arryBst1000[i].data = (rand()/(double)RAND_MAX) + (rand() % 10000);
	}
	BST bst1000tree = BST(arryBst1000);
	for(int i = 0; i < 1000; i++)
	{
		bst1000tree.insert(arryBst1000[i]);
	}
	bst1000tree.traverse_inorder(bst1000tree.get_root());
	information* bst1000 = bst1000tree.get_array();
	outfile.open("bst1000.dat", ios::trunc);
	for(int i = 0; i < 1000; i++)
	{
		information x = *(bst1000 + i);
		outfile << x.key << " " << x.data << endl;
	}
	outfile << "Passes: " << bst1000tree.get_passes();
	outfile.close();
	cout << "BST Sort Passes on array of 1000: " << bst1000tree.get_passes() << endl;
	
	//BST for array of 5000
	information arryBst5000[5000];
	for(int i = 0; i < 5000; i++)
	{
		arryBst5000[i].key = rand() % 50000 + 1;
		arryBst5000[i].data = (rand()/(double)RAND_MAX) + (rand() % 10000);
	}
	BST bst5000tree = BST(arryBst5000);
	for(int i = 0; i < 5000; i++)
	{
		bst5000tree.insert(arryBst5000[i]);
	}
	bst5000tree.traverse_inorder(bst5000tree.get_root());
	information* bst5000 = bst5000tree.get_array();
	outfile.open("bst5000.dat", ios::trunc);
	for(int i = 0; i < 5000; i++)
	{
		information x = *(bst5000 + i);
		outfile << x.key << " " << x.data << endl;
	}
	outfile << "Passes: " << bst5000tree.get_passes();
	outfile.close();
	cout << "BST Sort Passes on array of 5000: " << bst5000tree.get_passes() << endl;
	
	outfile.open("finalResults.txt", ios::trunc);
	outfile << "List 100: " << endl;
	outfile << "Big-O Calculated Value Selection Sort: O(n^2)      = 1000" << endl;
	outfile << "Big-O Calculated Value Insertion Sort: O(n^2)      = 1000" << endl;
	outfile << "Big-O Calculated Value Bubble Sort:    O(n^2)      = 1000" << endl;
	outfile << "Big-O Calculated Value QuickSort:      O(n*log(n)) = 200" << endl;
	outfile << "Big-O Calculated Value BST:            O(n*log(n)) = 200" << endl;
	outfile << endl;
	outfile << "Actual Selection Sort Passes: " << select100.get_passes() << endl;
	outfile << "Actual Insertion Sort Passes: " << insert100.get_passes() << endl;
	outfile << "Actual Bubble Sort Passes: " << bubble100.get_passes() << endl;
	outfile << "Actual QuickSort Passes: " << quick100.get_passes() << endl;
	outfile << "Actual BST Passes: " << bst100tree.get_passes() << endl;
	outfile << endl << endl << endl;
	outfile << "List 1000: " << endl;
	outfile << "Big-O Calculated Value Selection Sort: O(n^2)      = 1000000" << endl;
	outfile << "Big-O Calculated Value Insertion Sort: O(n^2)      = 1000000" << endl;
	outfile << "Big-O Calculated Value Bubble Sort:    O(n^2)      = 1000000" << endl;
	outfile << "Big-O Calculated Value QuickSort:      O(n*log(n)) = 3000" << endl;
	outfile << "Big-O Calculated Value BST:            O(n*log(n)) = 3000" << endl;
	outfile << endl;
	outfile << "Actual Selection Sort Passes: " << select1000.get_passes() << endl;
	outfile << "Actual Insertion Sort Passes: " << insert1000.get_passes() << endl;
	outfile << "Actual Bubble Sort Passes: " << bubble1000.get_passes() << endl;
	outfile << "Actual QuickSort Passes: " << quick1000.get_passes() << endl;
	outfile << "Actual BST Passes: " << bst1000tree.get_passes() << endl;
	outfile << endl << endl << endl;
	outfile << "List 5000: " << endl;
	outfile << "Big-O Calculated Value Selection Sort: O(n^2)      = 25000000" << endl;
	outfile << "Big-O Calculated Value Insertion Sort: O(n^2)      = 25000000" << endl;
	outfile << "Big-O Calculated Value Bubble Sort:    O(n^2)      = 25000000" << endl;
	outfile << "Big-O Calculated Value QuickSort:      O(n*log(n)) = about 18495" << endl;
	outfile << "Big-O Calculated Value BST:            O(n*log(n)) = about 18495" << endl;
	outfile << endl;
	outfile << "Actual Selection Sort Passes: " << select5000.get_passes() << endl;
	outfile << "Actual Insertion Sort Passes: " << insert5000.get_passes() << endl;
	outfile << "Actual Bubble Sort Passes: " << bubble5000.get_passes() << endl;
	outfile << "Actual QuickSort Passes: " << quick5000.get_passes() << endl;
	outfile << "Actual BST Passes: " << bst5000tree.get_passes() << endl;
	outfile << endl << endl << endl;
	outfile << "The actual number of passes does not always match the calculated number " << endl
			<< "of passes since the calculated number is typically just an average number of passes." << endl
			<< " The fastest sort in practice and in theory is the QuickSort." << endl
			<< " Obviously as we expect the size of the array affects the time of the sort. " << endl
			<< "The larger the size of the array, the longer it took to sort the array.";
			
	cout << "Results of sorts printed to respective files and all result have been printed to finalResults.txt";
	
	return(0);
}
