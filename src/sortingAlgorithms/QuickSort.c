/**
 * QuickSort.c
 *
 *  Created on: Aug 8, 2017
 *      Author:
 */

#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include"Sorting.h"

/**
 * Obtiene la particion del arreglo
 * @param a
 * @param l
 * @param r
 * @return j
 */
int partition(int a[], int l, int r)
{
	int pivot, i, j, t;
	pivot = a[l];
	i = l;
	j = r + 1;

	while (1)
	{
		do
			++i;
		while (a[i] <= pivot && i <= r);
		do
			--j;
		while (a[j] > pivot);
		if (i >= j)
			break;
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	t = a[l];
	a[l] = a[j];
	a[j] = t;
	return j;
}

/**
 *  ordenamiento rapido
 * @param a
 * @param l
 * @param r
 */
void quickSort(int a[], int l, int r)
{
	int j;

	if (l < r)
	{
		// divide and conquer
		j = partition(a, l, r);
		quickSort(a, l, j - 1);
		quickSort(a, j + 1, r);
	}

}

