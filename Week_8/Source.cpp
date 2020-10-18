#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char a[1000];
	scanf("%[^\n]", a);
	for (int i = 0; a[i] != '\0'; i++)
	{
		while (a[i] == a[i + 1])
		{
			i++;
		}
		printf("%c", a[i]);
	}
	return 0;
}