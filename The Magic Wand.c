/*You are a wizard who possesses a magical wand that can be used to change the values of an array. Your wand has two powers: Increase and Decrease. With each use of the wand, you can either increase or decrease any element of the array by 1.


One day, a group of villagers came to you with a problem. They had an array of positive integers of size N and a set of queries of size M. For each query, queries[i], they wanted to make all the elements of the array equal to queries[i] using your magic wand.


To help the villagers, you decided to use your magic wand to perform the operations. However, each time you perform an operation, the cost of using your wand increases. The cost of using your wand for an operation on an element is equal to the absolute difference between the value of the element and the desired value after the operation.

*/


/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
int main(int argc, char *a[])
{
	int N, M;
	scanf("%d", &N);
	scanf("%d", &M);
	//printf("N: %d, M: %d\n", N, M);
	int arr[N];
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		//printf("%d, ", arr[i]);
	}
	//printf("\n");
	int queries[M];
	for(int i = 0; i < M; i++)
	{
		scanf("%d", &queries[i]);
		//printf("%d, ", queries[i]);
	}
#if(1)
	int cost = 0;
	for(int i = 0; i < M; i++)
	{
		int temp_q = queries[i];

		for(int j = 0; j < N; j++)
		{
			int temp = arr[j] - temp_q;
			if(temp < 0)
				temp = temp*-1;
			
			cost = cost + temp;
		}

		printf("%d ", cost);
		cost = 0;
	}
#endif
}