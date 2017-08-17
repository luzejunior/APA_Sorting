#include <stdio.h>

void printArray(int* arr, int tam){
	int i;

	for(i=0; i<tam; i++){
		printf("[%d]", arr[i]);
	}
	printf("\n");
}