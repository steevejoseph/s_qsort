// Steeve Joseph
// An attempt at a quicksort function in C.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sjqsort.h"


#ifndef NUM_INDICIES
#define NUM_INDICIES 10
#endif

int main(void)
{
	int i, *array = calloc(1, sizeof(int) * NUM_INDICIES);

	srand(time(NULL));

	for (i = 0; i < NUM_INDICIES; ++i)
	 {
	 	array[i] = rand() % 100 + 1;
	 }

	 printf("Unsorted:\n");
	 print_array(array, NUM_INDICIES);
	 printf("\n");
	 printf("Sorted:\n");
	 quick_sort(array, NUM_INDICIES);
	 print_array(array, NUM_INDICIES);

}
