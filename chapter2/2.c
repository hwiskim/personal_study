#include <stdio.h>

int main()
{
	int exam_score;

	scanf("%d", &exam_score);
	
	if (exam_score >= 90 && exam_score <= 100)
	{
		printf("A\n");
	}
	else if (exam_score >= 80 && exam_score <= 89)
	{
		printf("B\n");
	}
	else if (exam_score >= 70 && exam_score <= 79)
	{
		printf("C\n");
	}
	else if (exam_score >= 60 && exam_score <= 69)
	{
		printf("D\n");
	}
	else
		printf("F\n");
	return 0;
}