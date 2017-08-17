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

//Selection Sort algorithm method
void selectionSort(int* arr, int tam){
	int aux1, aux2, i, j; //Auxiliary variables.
	int indice; //Variable to store the smaller number array index.

	//For each position on array...
	for(i=0; i<tam; i++){
		aux1 = arr[i];
		indice = i;

		//Search for the smaller number...
		for(j=i+1; j<tam; j++){
			aux2 = arr[j];

			//If the actual array number is smaller than the main auxiliary number:
			if(aux2 < aux1){
				aux1 = aux2; //Attribute the smaller to the auxiliary.
				indice = j; //Update the array index.
			}
		}

		//If a smaller number was found:
		if(indice != i){
			//Change numbers array position.
			arr[indice] = arr[i];
			arr[i] = aux1;
			//printArray(arr, tam);
		}
	}
}