/**
 * HeapSort.c
 *
 *  Created on: Aug 8, 2017
 *      Author:
 */

#include <stdio.h>
#include <stdlib.h>
#include "Sorting.h"

/**
 * functions for heapsort
 * Obtiene el numero maximo
 * @param arr
 * @param n
 * @param i
 * @param j
 * @param k
 * @return
 */
int max(int *arr, int arrSize, int i, int j, int k)
{
	int m = i;
	if (j < arrSize && arr[j] > arr[m])
	{
		m = j;
	}
	if (k < arrSize && arr[k] > arr[m])
	{
		m = k;
	}
	return m;
}

/**
 * Procedimiento
 * @param arr
 * @param n
 * @param i
 */
void downheap(int *arr, int arrSize, int i)
{
	while (1)
	{
		int j = max(arr, arrSize, i, 2 * i + 1, 2 * i + 2);
		if (j == i)
		{
			break;
		}
		int t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
		i = j;
	}
}

/**
 * Ordenamiento por Cabecera
 * @param arr
 * @param n
 */
void heapsort(int *arr, int arrSize)
{
	int i;
	for (i = (arrSize - 2) / 2; i >= 0; i--)
	{
		downheap(arr, arrSize, i);
	}
	for (i = 0; i < arrSize; i++)
	{
		int t = arr[arrSize - i - 1];
		arr[arrSize - i - 1] = arr[0];
		arr[0] = t;
		downheap(arr, arrSize - i - 1, 0);
	}
}
