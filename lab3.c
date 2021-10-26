#include <stdio.h>
#include <string.h>

void reverseString(char s[])
{
	char* a;
	for (int i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
	}
}

void main(void)
{
	printf("Input string: ");
	char str[100];
	gets(str);
	reverseString(str);
	printf("Reversed string: %s", str);
}
