#include<stdio.h>

int main()
{
	FILE *input, *output;
	int cnt;
	char str[100];
	input = fopen("welcome.txt", "r");
	output = fopen("output.txt", "w");

	while (!feof(input))
	{
		cnt = fscanf(input, "%s", str);
		if (cnt > 0)
		{
			fprintf(output, "%s\n", str);
		}
	}
	fclose(input);
	fclose(output);

	return 0;
}