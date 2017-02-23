/*
 *Name: Laborawaty Rajagukguk
 *NPM: 1606954855
 *CLass: S1-EKSTENSI
 *Comment: I'll try my best.
*/

#define LOOP 4

#include <stdio.h>

void main(){
	int input = 5;
	int i, product = 0;
	for(i=0; i<input; i++){
		product = product + LOOP;
	}
	printf("%d times %d equals %d\n", input, LOOP, product);
}
