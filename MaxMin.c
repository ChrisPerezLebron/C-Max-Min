
#include <stdio.h>

#define N 4

void max_min(int a[], int n, int *max, int *min);

int main( ){

	int b[N], i, big, small;

	printf("Enter %d numbers: ", N);

	for(i = 0; i < N; i++)
		scanf("%d", &b[i]);

	max_min(b, N, &big, &small);

	printf("Largest: %d\n", big);
	printf("Smallest: %d\n", small);

	return 0;

}


void max_min(int a[], int n, int *max, int *min) {

	int i;
	int *iPointer = &i;

	*max = *min = a[0];

	for(*iPointer = 1; *iPointer < n; (*iPointer)++) {
		if (a[*iPointer] > *max)
			*max = a[*iPointer];
		else if (a[*iPointer] < *min)
			*min = a[*iPointer];
	}

}
