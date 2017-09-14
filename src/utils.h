#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PRINT_FLAG 0

//Insertion Sort
void insertionSort(int*, int);

//Selection Sort
void selectionSort(int*, int);

//Quick Sort
void quickSort(int*, int, int);

//Merge Sort
void merge(int*, int, int, int);
void mergeSort(int*, int, int);


//Heap Sort
void maxHeapify(int*, int, int);
void buildMaxHeap(int*, int);
void heapSort(int*, int);

//Counting Sort
void countingSort(int*, int, int);

//Radix Sort
void radixSort(int*, int);

//Util File
void printArray(int*, int);
int getHigherNumber(int[], int);
int createArrayFromFile(char*, int**);
int readNumberOfLines(FILE*);