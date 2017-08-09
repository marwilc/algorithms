/*
 * TestSorting.c
 *
 *  Created on: Aug 9, 2017
 *      Author:
 */


#include <stdio.h>
#include <stdlib.h>
#include "Sorting.h"
#define SMALL 100000 		// 	number of registers less 100000
#define MEDIUM 500000		//  	number of registers 500000
#define LARGE 1000000		// 	number of registers large more than one million

void readFileSmall(int array[])
{
	 FILE * fileInput;
	 fileInput = fopen("small.in", "r");

	 for (int i = 0; i < SMALL; i++)
	 {
		fscanf(fileInput, "%d", &array[i]);
	 }

	 fclose(fileInput);

}

void printArray(int array[], int  n)
{
	for (int i = 0;  i < n; i++)
	{
		printf("%d ", array[i]);
	}
}
int main(void)
{
	int smallArray[SMALL];
	int mediumArray[MEDIUM];
	int largeArray[LARGE];

	readFileSmall(smallArray);

	quickSort(smallArray, 0, SMALL-1);
	printArray(smallArray, SMALL);

}
