/*

Author: Luzenildo de Sousa Batista Junior
E-Mail: luzejunior94@gmail.com

License:

MIT License

Copyright (c) 2017 Luzenildo de Sousa Batista Junior

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#include "utils.h"

//Main function
int main(int argc, char *argv[]){

	int tam_array; //Array size definition.
	int *arr = NULL;

	tam_array = createArrayFromFile("text.txt", &arr);	

	//If the argument is selection, run selectionSort method.
	if(!strcmp("selection", argv[1])){
		printf("\nRunning Selection Sort Algorithm......\n");
		selectionSort(arr, tam_array); //Run SelectionSort method.
	}

	//If the argument is insertion, run insertionSort method.
	else if(!strcmp("insertion", argv[1])){
		printf("\nRunning Insertion Sort Algorithm......\n");
		insertionSort(arr, tam_array); //Run InsertionSort method.
	}

	//If the argument is merge, run mergeSort method.
	else if(!strcmp("merge", argv[1])){
		printf("\nRunning Merge Sort Algorithm......\n");
		mergeSort(arr, 0, tam_array-1);
	}
	
	//If the argument is quick, run quickSort method.
	else if(!strcmp("quick", argv[1])){
		printf("\nRunning Quick Sort Algorithm......\n");
		quickSort(arr, 0, tam_array-1);
	}

	//If the argument is heap, run heapSort method.
	else if(!strcmp("heap", argv[1])){
		printf("\nRunning Heap Sort Algorithm......\n");
		heapSort(arr, tam_array);
	}

	else if(!strcmp("counting", argv[1])){
		printf("\nRunning Counting Sort Algorithm......\n");
		int maiorNumero = getHigherNumber(arr, tam_array);
		printf("O maior numero é: %d\n", maiorNumero);
		countingSort(arr, tam_array, maiorNumero);
	}

	else if(!strcmp("radix", argv[1])){
		printf("\nRunning Radix Sort Algorithm......\n");
		radixSort(arr, tam_array);
	}

	//If not, a wrong argument was typed.
	else{
		printf("Invalid argument\n");
		exit(1);
	}

	printf("\nArray after sorting...\n");
	printArray(arr, tam_array); //Print array after sorting.
}