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

**/

#include "utils.h"

void radixSort(int* arr, int tam){
	int i;
	int c[10];
	int b[tam];
	int divider = 1;
	int higherNumber = getHigherNumber(arr, tam);

	while(higherNumber/divider > 0){
		for(i=0; i<10; i++)
			c[i] = 0;

		for(i=0; i<tam; i++)
			c[(arr[i]/divider) % 10]++;

		//printArray(c, 10);

		for(i=1; i<10; i++)
			c[i] += c[i-1];

		//printArray(c, 10);

		for(i=tam-1; i>=0; i--){
			b[c[((arr[i]/divider) % 10)]-1] = arr[i];
			c[(arr[i]/divider) % 10]--;
		}

		//printArray(b, tam);

		for(i=0; i<tam; i++)
			arr[i] = b[i];

		divider*=10;
	}
}