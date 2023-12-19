#include<stdio.h>

#define max 80

int main()
{
	FILE *output;
	char str[max];
	int bytes;
	output = fopen("output.txt", "r");

	while (!feof(output))
	{
		bytes = fread(str, sizeof(char), max - 1, output);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
	fclose(output);

	return 0;
}