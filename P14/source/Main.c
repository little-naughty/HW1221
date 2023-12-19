#include<stdio.h>

int main()
{
	FILE *a;
	char ch;
	int count = 0;

	a = fopen("welcome.txt", "r");

	if (a == NULL)
	{
		printf("檔案開啟失敗");
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
		printf("\n總共有%d個字元\n", count);
	}

	return 0;
}