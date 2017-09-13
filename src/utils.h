#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PRINT_FLAG 0

//Insertion Sort
void insertionSort(int* arr, int tam);

//Selection Sort
void selectionSort(int* arr, int tam);

//Quick Sort
void quickSort(int* arr, int comeco, int fim);

//Merge Sort
void merge(int* arr, int comeco, int meio, int fim);
void mergeSort(int* arr, int comeco, int fim);


//Heap Sort
void maxHeapify(int* arr, int pos, int tam);
void buildMaxHeap(int* arr, int tam);
void heapSort(int* arr, int tam);

//Util Class
void printArray(int* arr, int tam);