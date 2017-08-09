/**
 * Sorting.h
 *
 *  Created on: Aug 8, 2017
 *      Author:
 */

#ifndef SORTINGALGORITHMS_SORTING_H_
#define SORTINGALGORITHMS_SORTING_H_

/*
 * ordenamiento por seleccion
 */
void sortSelection(int[], int);

/*
 * ordenamiento por insercion
 */
void sortInsertion(int[], int);
//===========================Functions HeapSort==========================================
/*
 * obtiene el maximo
 */
int max(int arr[], int n, int i, int j, int k);

/*
 * pone la cabecera de heap
 */
void downHeap(int arr[], int n, int i);

/*
 * ordenamiento por cabecera
 */
void heapSort(int arr[], int n);
//=============================Quick Sort==============================================
/*
 * obtiene la particion del arreglo
 */
int partition(int[], int, int);

/*
 * ordenamiento rapido
 */
void quickSort(int[], int, int);
//==============================Merge Sort==========================================
/*
 * copiar un arreglo en otro
 */
void copy(int [], int[], int, int);
/*
 *  Mezcla de los lados del arreglo
 */

void mergeSides(int [], int , int, int);

/*
 * ordenamiento por mezcla
 */

void sortMerge(int [], int, int);
#endif /* SORTINGALGORITHMS_SORTING_H_ */
