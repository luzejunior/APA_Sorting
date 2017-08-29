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

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

void merge(int* arr, int comeco, int meio, int fim){
	int aux[fim-comeco+1];
	int apontador1 = comeco;
	int apontador2 = meio+1;
	int apontadorAux = 0;

	while(apontador1 <= meio && apontador2 <= fim){
		if(arr[apontador2] < arr[apontador1]){
			aux[apontadorAux] = arr[apontador2];
			apontador2++;
		}
		else{
			aux[apontadorAux] = arr[apontador1];
			apontador1++;
		}
		apontadorAux++;
	}

	while(apontador1<=meio){
		aux[apontadorAux++] = arr[apontador1++];
	}

	while(apontador2<=fim){
		aux[apontadorAux++] = arr[apontador2++];
	}

	for(apontadorAux = comeco; apontadorAux<=fim; apontadorAux++){
		arr[apontadorAux] = aux[apontadorAux-comeco];
	}

}

void mergeSort(int* arr, int comeco, int fim){
	if(comeco<fim){
		printf("Comeco: %d, Fim: %d\n", comeco, fim);
		int meio = (comeco+fim)/2; 
		mergeSort(arr, comeco, meio);
		mergeSort(arr, meio+1, fim);
		merge(arr, comeco, meio, fim);
	}
}