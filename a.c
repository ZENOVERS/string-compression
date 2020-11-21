#include <stdio.h>
#include <Windows.h>
#pragma warning(disable : 4996)


char s_g[3001] = { NULL, };
int count_g = 1, j_g;


void Compression()
{
	for (int i = 0; s_g[i] != NULL; i = (j_g + 1))
	{
		for (j_g = i; s_g[j_g] == s_g[j_g + 1]; j_g++)
			count_g++;

		printf("%c", s_g[i]);
		if (count_g != 1)
			printf("%d", count_g);

		count_g = 1;
	}
}

int main()
{
	system("title 문자열 압축 (only ENG)");

	puts("압축할 문자열 입력(영어만)");
	scanf("%[a-z || A-Z]s", s_g);
	puts("");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	Compression();

	puts("\n\n");
	system("pause");
	return 0;
}