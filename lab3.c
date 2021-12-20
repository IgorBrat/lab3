#include <stdio.h>
#include <string.h>
#define LEN 100

void reverseString(char input_string[])     // function which reverses inputed string
{
	char* temp;
	for (int i = 0, j = strlen(input_string) - 1; i < j; i++, j--)
	{
		temp = input_string[i];
		input_string[i] = input_string[j];
		input_string[j] = temp;
	}
}

void main(void)
{
	printf("Input string: ");
	char str[LEN];
	gets(str);
	reverseString(str);
	printf("Reversed string: %s", str);
}
