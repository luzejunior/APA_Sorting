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

//Function to print the list.
void printArray(int* arr, int tam){
	int i;

	for(i=0; i<tam; i++){
		printf("[%d]", arr[i]);
	}

	printf("\n");
}

//Function to get the Higher number in an array.
int getHigherNumber(int arr[], int tam){
	int i;
	int higherNbr = 0;

	for(i=0; i<tam; i++){
		if(arr[i] > higherNbr){
			higherNbr = arr[i];
		}
	}

	return higherNbr;
}

int createArrayFromFile(char *filename, int** arr){
	int i = 0;

	FILE *file = fopen(filename, "r");
	if(NULL == file)
    {
        printf("Unable to open file\n");
        exit(-1);
    }
   	
	int numberOfElements = readNumberOfLines(file);
	printf("number of elements: %d \n", numberOfElements);

	fseek(file, 0, SEEK_SET);

	int* arr2 = (int*) calloc(numberOfElements, sizeof(int));

	if (file != NULL) {
        while (!feof(file)) {
        	fscanf(file, "%d", &arr2[i]);
        	i++;
        }
    } else {
        printf("Unable to open file");
        return -1;
    }

    *arr = arr2;
    fclose(file);
    return i;
}

int readNumberOfLines(FILE *file){
	int lines = 0;
	int ch = 0;

	while(!feof(file)){
	  ch = fgetc(file);

	  if(ch == '\n'){
	    lines++;
	  }
	}

	return lines;
}