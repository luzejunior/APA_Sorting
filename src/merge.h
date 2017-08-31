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

//Merge method to merge the divided arrays.
void merge(int* arr, int comeco, int meio, int fim){
	int aux[fim-comeco+1]; //Auxiliary array.
	int apontador1 = comeco; //Array 1 pointer.
	int apontador2 = meio+1; //Array 2 pointer.
	int apontadorAux = 0; //Auxiliaty array pointer

	//Main algorithm commands:
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

	//If there is any remainig numbers on arrays, copy to auxiliaxy array.
	while(apontador1<=meio){
		aux[apontadorAux++] = arr[apontador1++];
	}

	while(apontador2<=fim){
		aux[apontadorAux++] = arr[apontador2++];
	}

	//Transfer sorted auxiliary array to main array.
	for(apontadorAux = comeco; apontadorAux<=fim; apontadorAux++){
		arr[apontadorAux] = aux[apontadorAux-comeco];
	}

}

//Merge Sort algorithm method
void mergeSort(int* arr, int comeco, int fim){
	//Compare Start with end to see if array can be divided.
	if(comeco<fim){

		//Print or not informations: YOU CAN CHANGE THIS FLAG ON "utils.h" FILE.
		if(PRINT_FLAG){
			printf("Comeco: %d, Fim: %d\n", comeco, fim);
		}

		int meio = (comeco+fim)/2; //Calculate middle of array.
		mergeSort(arr, comeco, meio); //Recursively call mergeSort method to the first array half.
		mergeSort(arr, meio+1, fim); //Recursively call mergeSort method to the second array half.
		merge(arr, comeco, meio, fim); //Call merge to merge arrays.
	}
}