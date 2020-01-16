#include <stdio.h>

int main() {
	int n = 7;
	int a[7] = {8,2,3,34,-2,7,23}; 

	printf("Largest: %d \n", largest(a, n));
	printf("Average: %d \n", avg(a, n));
	printf("Positive: %d \n", isPositive(a, n));
	
	return 0;
}

int largest(int a[], int n){
	int max = 0, i;
	
	for(i=0; i<n; i++){
		if(max < a[i])
			max = a[i];
	}
	
	return max;
}

int avg(int a[], int n){
	int sum = 0, i;
	
	for(i=0; i<n; i++){
		sum += a[i];
	}
	
	return sum/n;
}

int isPositive(int a[], int n){
	int count = 0, i;
	
	for(i=0; i<n; i++){
		if(a[i] > 0)
			count++;
	}
	
	return count;
}
