#include<stdio.h>

void printArray(int* arr, int tam){
	int i;

	for(i=0; i<tam; i++){
		printf("[%d]", arr[i]);
	}
	printf("\n");
}

void selectionSort(int* arr, int tam){
	int aux1, aux2, i, j;
	int indice;

	for (i=0; i<tam; i++){
		aux1 = arr[i];
		indice = i;

		for(j=i+1; j<tam; j++){
			aux2 = arr[j];
			if(aux2 < aux1){
				aux1 = aux2;
				indice = j;
			}
		}

		if(indice != i){
			arr[indice] = arr[i];
			arr[i] = aux1;
			//printArray(arr, tam);
		}
	}
}

int main(void){

	int tam_array = 10;
	int arr[10] = {8,5,2,6,9,3,1,4,0,7};

	printArray(arr, tam_array);
	selectionSort(arr, tam_array);
	printArray(arr, tam_array);

}