#include<stdio.h>

#define max 80
#define enter 13

int main()
{
	printf("請輸入字串，按ENTER見結束輸入：\n");

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
	printf("\n檔案附加完成\n");

		return 0;
}