#include<stdio.h>

int main()
{
	FILE *read, *write;
	char ch;

	read = fopen("welcome.txt", "r");
	write = fopen("output.txt", "w");

	if ((read == NULL) && (write == NULL))
	{
		printf("�ɮ׶}�ҥ���");
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
		printf("�ɮ׫�������\n");
	}

	return 0;
}