#include<stdio.h>

int main()
{
	FILE *read, *write;
	char ch;

	read = fopen("welcome.txt", "r");
	write = fopen("output.txt", "w");

	if ((read == NULL) && (write == NULL))
	{
		printf("檔案開啟失敗");
		return 0;
	}
	else
	{
		while ((ch = getc(read)) != EOF)
		{
			putc(ch, write);
		}
		fclose(read);
		fclose(write);
		printf("檔案拷貝完成\n");
	}

	return 0;
}