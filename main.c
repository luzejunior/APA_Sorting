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

#include "utils.h"
#include "selection.h"
#include "insertion.h"

//Main function
int main(int argc, char *argv[]){

	int tam_array = 10; //Array size definition.
	int arr[10] = {8,5,2,6,9,3,1,4,0,7}; //Array definition.

	printArray(arr, tam_array); //Print array before sorting.

	//If the argument is selection, run selectionSort method.
	if(!strcmp("selection", argv[1])){
		printf("Running Selection Sort Algorithm......\n");
		selectionSort(arr, tam_array); //Run SelectionSort method.
	}

	//If the argument is insertion, run insertionSort method.
	else if(!strcmp("insertion", argv[1])){
		printf("Running Insertion Sort Algorithm......\n");
		insertionSort(arr, tam_array); //Run InsertionSort method.
	}

	//If not, a wrong argument was typed.
	else{
		printf("Invalid argument\n");
		exit(1);
	}

	printArray(arr, tam_array); //Print array after sorting.
}