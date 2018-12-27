#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *a;
	char q[80];
	int i;
	a = fopen("C://Users/ab78989/Desktop/107360230_³¢½÷Às(HW7)/P17/output.txt", "r");
	if (a == NULL)
	{
		printf("ÀÉ®×¶}±Ò¥¢±Ñ\n");
	}
	else
	{
		i = fread(q, sizeof(char), 79, a);
		q[i] = '\0';
		printf("%s\n", q);
	}
	fclose(a);
	system("pause");
}