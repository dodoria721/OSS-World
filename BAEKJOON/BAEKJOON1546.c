#include <stdio.h>

int main()
{
	int n; // ���� ��
	scanf("%d", &n);

	int score[1000]; // ���� �迭
	double rescore[1000];
	int max = 0; // ���� �ִ�
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &score[i]); // ���� �Է�

		if (score[i] >= max)
			max = score[i]; // �ִ� �Ǻ�
	}

	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		rescore[i] = (double)score[i] / max * 100;
		sum += rescore[i];
	}

	printf("%lf", sum / n);

	return 0;
}