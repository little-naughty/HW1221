#include<stdio.h>

int main()
{
	FILE *a;
	char ch;
	int count = 0;

	a = fopen("welcome.txt", "r");

	if (a == NULL)
	{
		printf("�ɮ׶}�ҥ���");
		return 0;
	}
	else
	{
		while ((ch = getc(a)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(a);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}

	return 0;
}