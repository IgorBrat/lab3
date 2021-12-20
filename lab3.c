#include <stdio.h>
#include <string.h>

void reverseString(char input_string[])     // function which reverses inputed string
{
	char* temp;
	for (int i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
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
