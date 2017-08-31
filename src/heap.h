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

void maxHeapify(int* arr, int pos, int tam){
	int left = 2*pos+1;
	int right = 2*pos+2;
	int maior = pos;

	if(PRINT_FLAG){
		printArray(arr, tam);
	}
	
	if(left<=tam-1 && arr[left]>arr[pos]){
		maior = left;
	}

	if(right<=tam-1 && arr[right]>arr[maior]){
		maior = right;
	}

	if(maior != pos){
		int aux = arr[pos];
		arr[pos] = arr[maior];
		arr[maior] = aux;
		maxHeapify(arr, maior, tam);
	}
}

void buildMaxHeap(int* arr, int tam){
	for(int i = (tam-1)/2; i>=0; i--){
		maxHeapify(arr, i, tam);
	}
}

void heapSort(int* arr, int tam){
	int tamanho_array = tam-1;
	buildMaxHeap(arr, tam);

	for(int i = tam-1; i>=0; i--){
		int aux = arr[i];
		arr[i] = arr[0];
		arr[0] = aux;

		if(PRINT_FLAG){
			printf("\nMaxHeapify\n");
		}

		maxHeapify(arr, 0, tamanho_array);
		tamanho_array--;
	}
}