/*
 * GenerateTxtFile.c
 *
 *  Created on: Aug 9, 2017
 *      Author: marwilc
 */

#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#define SMALL 100000 		// 	number of registers less 100000
#define MEDIUM 500000		//  	number of registers 500000
#define LARGE 1000000		// 	number of registers large more than one million


void writeToFile(int n)
{
	FILE *file;
	char fileName[10] ;
	if(n == SMALL)
		strcpy(fileName,"small.in" );
	else if(n == MEDIUM)
		strcpy(fileName,"medium.in" );
	else
		strcpy(fileName,"large.in" );

	file = fopen(fileName, "w");
	for (int i = 0; i < n; ++i)
	{
		fprintf(file, "%d ", rand() % n);
		//printf("%d ", rand() % n);
	}

	fclose(file);
}

int main(void)
{
	srand(1);
	writeToFile(SMALL);
	writeToFile(MEDIUM);
	writeToFile(LARGE);
}

