#include <stdlib.h>
#include <stdio.h>

void main (void){

	long long topValue = 2000000;
	int array[topValue+1];
	 long long sum = 2;
	
	// all number are prime
	for(long long i=3; i <= topValue;i += 2 ){
		array[i] = 1;
	}
	
	for(long long prime = 3; prime <= topValue;prime += 2){
		if (array[prime]){
			for(long long multiple = prime * prime; multiple <= topValue; multiple += prime){
				if(array[multiple])
					array[multiple] = 0;
			}
		}
	}
	
	for (long long i = 3; i <= topValue; i += 2){
		if(array[i]){
			sum += i;
			
		}
	}
	printf("Sum is %lld\n", sum);
}