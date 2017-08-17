#include "utils.h"
#include "selection.h"
#include "insertion.h"

int main(void){

	int tam_array = 10;
	int arr[10] = {8,5,2,6,9,3,1,4,0,7};

	printArray(arr, tam_array);
	selectionSort(arr, tam_array);
	printArray(arr, tam_array);

}