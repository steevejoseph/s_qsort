//	Steeve Joseph
//	============================================
//	| An attempt at a quicksort function in C. |
//	============================================
#include <stdio.h>
#include <stdlib.h>

void printArray(int *array, int n);
void bequick(int *array, int size);
void quickswap(int *array, int *a, int *b);

// Swaps the values at two addresses in an array of ints.
// Used solely for bequick().
void quickswap(int *array, int *a, int *b)
{
	int tmp;
	tmp = *a; *a = *b; *b = tmp;
}

// Prints an array when given an array an a number of elements.
void printArray(int *array, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d ", array[i]);
	}

	printf("\n");			
}

// Function that takes in a pointer to an array and
// the number of elements in the array, then 
// sorts it quick-sort style, with a 0th-index pivot.
void bequick(int *array, int size)
{
	int i, *pivot,*rptr, *lptr;

	if(size <= 1)
	{
		return;
	}

	// pivot is the 0th element in the array.
	pivot = array;

	// right pointer (rptr) is the last element in the array.
	rptr = array + (size-1);

	// left pointer (lptr) is the 1th element in the array.
	lptr = array + 1;

	// while the pointers haven't crossed over:
	while(rptr >= lptr)
	{
		// if rptr finds something smaller than pivot &&
		// if lptr finds something bigger than pivot,
		// swap the two.
		if (*rptr < *pivot && *lptr > *pivot)
		{
			//printf("swapped lptr: <%d> & rptr: <%d>\n", *lptr, *rptr);
			quickswap(array, lptr, rptr);

			lptr++;
			rptr--;
		}

		// if rptr finds what it's looking for, but lptr doesn't,
		// move lptr "right" one.
		else if (*rptr < *pivot && !(*lptr > *pivot))
		{
			//printf("moving lptr from %d to %d \n", *lptr, *(lptr + 1));
			lptr++;
		}

		// if lptr finds what it's looking for, but rptr doesn't,
		// move rptr "left" one.
		else if (!(*rptr < *pivot) && *lptr > *pivot)
		{
			//printf("moving rptr from %d to %d \n", *rptr, *(rptr - 1));
			rptr--;
		}

		// otherwise, if neither find what they're looking for, move both.
		else
		{
			lptr++;
			rptr--;
		}

	}

	//printf("post loop swapping <%d> & <%d>\n", *pivot, *rptr);
	//fflush(stdout);

	// swap the pivot with the crossed-over right pointer.
	quickswap(array, pivot, rptr);

	// recursive calls to left and right partition of array,
	// partitoned by the left pointer. 
	bequick(array, (rptr - array));
	bequick(lptr, &(array[size]) - lptr);
}