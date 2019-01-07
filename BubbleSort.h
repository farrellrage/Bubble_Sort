//------------------------------------------------------------------------------
//Programmer:		Austin M Farrell
//Bubble Sort
//	Bubble sort iterates through every element in the array, comparing two
//	consecutive elements at a time and swapping them if the first element
//	is larger than the second.
//	Every pass through the array, the last element of the previous pass is
//	ignored because it will have been "bubbled" up to its correct location.
//------------------------------------------------------------------------------
#ifndef BubbleSort_h
#define BubbleSort_h

#include "Standards.h"
#include "StandardHelperFunctions.h"

template <typename type>
void BubbleSort(type data[], int length)
{
	/*
	Loop for each value in the array
	*/
	for (int pass = 0; pass < length; pass++)
	{
		/*
		For each element from the beginning of the array to the 
		*/
	} // !for
} // !BubbleSort

#endif // !BubbleSort_h