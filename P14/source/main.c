#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *a;
	int count = 0;
	char ch;
	a = fopen("C://Users/ab78989/Desktop/107360230_�����s(HW7)/P14/welcome.txt", "r");

	if (a != NULL)
	{
		while ((ch = getc(a)) != EOF)
		{

			printf("%c", ch);
			count++;
		}
		fclose(a);
	}
	else
	{
		printf("�ɮ׶}�ҥ���\n");
	}
	printf("\n�`�@��%d�Ӧr��\n", count);
	system("pause");
}