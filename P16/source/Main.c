#include<stdio.h>

#define max 80
#define enter 13

int main()
{
	printf("�п�J�r��A��ENTER��������J�G\n");

	FILE *output;
	char str[max], ch;
	int x = 0;
	output = fopen("output.txt", "a");

	while ((ch = getche()) != enter && x < max)
	{
		str[x++] = ch;
	}
	putc('\n', output);
	fwrite(str, sizeof(char), x, output);
	fclose(output);
	printf("\n�ɮת��[����\n");

		return 0;
}