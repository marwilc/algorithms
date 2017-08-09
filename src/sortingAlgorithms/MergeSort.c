/**
 * MergeSort.c
 *
 *  Created on: Aug 8, 2017
 *      Author:
 */

#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include"Sorting.h"

/**
 * mezcla de ambos lados
 * @param a
 * @param init
 * @param mid
 * @param end
 */
void mergeSides(int a[], int init, int mid, int end)
{
	int i, left, rigth, b[];
	left = init;
	rigth = mid;
	copy(a,b,init,end);

	for (i = init; i < end; i++)
	{
		if(left < mid && (rigth == end || b [left] <= b[rigth]))
		{
			a[i] = b[left];
			left++;
		}
		else
		{
			a [i] = b [rigth];
			rigth ++;
		}
	}
}

void mergeSort(int a[], int init, int end) // [init, end]
{
	int mid;
	if(end - init > 1)
	{
		mid = (init + end) / 2;
		mergeSort(a, init, mid);
		mergeSort(a, mid, end);
		mergeSides(a, init, mid, end);
	}
}

