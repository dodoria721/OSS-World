#include <stdio.h>

int main()
{
	int n; // 과목 수
	scanf("%d", &n);

	int score[1000]; // 점수 배열
	double rescore[1000];
	int max = 0; // 점수 최댓값
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &score[i]); // 점수 입력

		if (score[i] >= max)
			max = score[i]; // 최댓값 판별
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