// Steeve Joseph
// An attempt at a quicksort function in C.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sjqsort.h"


#ifndef NUM_INDICIES
#define NUM_INDICIES 10
#endif

void printArray(int *array, int n);
void bequick(int *array, int size);
void quickswap(int *array, int *a, int *b);

int main(void)
{
	int i, *array = calloc(1, sizeof(int) * NUM_INDICIES);

	srand(time(NULL));

	for (i = 0; i < NUM_INDICIES; ++i)
	 {
	 	array[i] = rand() % 100 + 1;
	 } 

	 printArray(array, NUM_INDICIES);
	 printf("\n");

	 bequick(array, NUM_INDICIES);

	 printArray(array, NUM_INDICIES);

}