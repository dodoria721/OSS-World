#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int N, M, i, j;
	int arr[100];
	int temp = 0;

	scanf("%d %d", &N, &M);

	for (int a = 0; a < N; a++)
	{
		arr[a] = a + 1;
	}

	for (int b = 0; b < M; b++)
	{
		scanf("%d %d", &i, &j);

		while (i < j)
		{
			temp = arr[i - 1];
			arr[i - 1] = arr[(j - 1) - (i - 1)];
			arr[(j - 1) - (i - 1)] = temp;
			i++;
			j--;
		}

	}

	for (int d = 0; d < N; d++)
	{
		printf("%d ", arr[d]);
	}

	return 0;
}