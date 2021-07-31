#include<stdio.h>
#include <stdbool.h>
#include<sys/time.h>
#include<stdlib.h>

void swap(int a[], int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void bubble_sort (int a[], int ctr) {
	int i = 0, j;
	bool flag = 0;
	for (i = 0; i<  ctr -1; i++) {
		flag = false;
		for (j = 0; j < ctr-i-1; j++) {
			if (a[j] > a[j+1]) {
				swap(a,j,j+1);
				flag = true;
			}
		}
		if( !flag ) {
			break;
		}
	}
}

void generate_random_input ( int initial, int inc) {
	struct timeval te;
	int i;

	for (i = 0; i < 8; i++) {
		int s = initial + inc * i;
		int a[s];
		for(int x = 0; x < s; x++) {
			a[x] = rand();
		}

		gettimeofday(&te, NULL);
		long long start = te.tv_sec * 1000LL + te.tv_usec / 1000;
		bubble_sort(a, s);
		gettimeofday(&te, NULL);
		long long end = te.tv_sec * 1000LL + te.tv_usec / 1000;
		printf("time taken when array has random values %11lld\n",end - start);
	}
}

void generate_sorted_input ( int initial, int inc) {
	struct timeval te;
	int i;

	for (i = 0; i < 8; i++) {
		int s = initial + inc * i;
		int a[s];
		for(int x = 0; x < s; x++){
			a[x] = x;
		}
		gettimeofday(&te, NULL);
		long long start = te.tv_sec * 10000LL + te.tv_usec / 100;
		bubble_sort(a, s);
		gettimeofday(&te, NULL);
		long long end = te.tv_sec * 10000LL + te.tv_usec / 100;
		printf("time taken when array values is sorted %11lld\n",end - start);
	}
}

void generate_reverse_sorted_input ( int initial, int inc) {
	struct timeval te;
	int i;

	for (i = 0; i < 8; i++) {
		int s = initial + inc * i;
		int a[s];
		for(int x = 0; x < s; x++) {
			a[x] = s - x;
		}
		gettimeofday(&te, NULL);
		long long start = te.tv_sec * 1000LL + te.tv_usec / 1000;
		bubble_sort(a, s);
		gettimeofday(&te, NULL);
		long long end = te.tv_sec * 1000LL + te.tv_usec / 1000;
		printf("time take by when array has reverse sorted values %11lld\n",end - start);
	}
}
//main function
int main ( ) {
	int initial = 8000;
	int inc = 4000;
	//calls a function which inputs random values to array,Also calculates the time taken to sort the array.
	generate_random_input( initial, inc );
	printf("\n");
	//calls a function which inputs sorted values to array,Also calculates the time taken to sort the array.
	generate_sorted_input( initial, inc );
	printf("\n");
	//calls a function which inputs reversely sorted values to array,Also calculates the time taken to sort the array.
	generate_reverse_sorted_input( initial, inc );
	printf("\n");
}

