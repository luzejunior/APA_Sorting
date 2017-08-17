void insertionSort(int* arr, int tam){
	int aux1, aux2, i, j;
	int indice;
	int found = 0;

	for(i=0; i<tam-1; i++){
		aux1 = arr[i];
		aux2 = arr[i+1];
		indice = i;
		found = 0;

		for(j=i+1; j>0; j--){
			while(aux2 < arr[j-1]){
				arr[j] = arr[j-1];
				indice = j-1;
				found = 1;
				break;
			}
		}

		if(found){
			arr[indice] = aux2;
		}
	}
}