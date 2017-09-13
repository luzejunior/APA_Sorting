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

#include "utils.h"

//Insertion Sort algorithm method
void insertionSort(int* arr, int tam){
	int aux, i, j; //Auxiliary variables.
	int indice; //Variable to store the smaller number array index.
	int found = 0; //Flag to indicate if a smaller number was found.

	//For each position on array...
	for(i=0; i<tam-1; i++){
		//Variables initialization:
		aux = arr[i+1];
		indice = i;
		found = 0;

		//For each number before the actual number...
		for(j=i+1; j>0; j--){

			//While a small number is found...
			while(aux < arr[j-1]){
				arr[j] = arr[j-1]; //Change position.
				indice = j-1; //Update the array index.
				found = 1; //Set flag.
				break; //Get out of the while.
			}
		}

		//If a smaller number was found:
		if(found){
			arr[indice] = aux; //Update his position on array.
		}
	}
}