void selectionSort(int* arr, int tam){
	int aux1, aux2, i, j;
	int indice;

	for(i=0; i<tam; i++){
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