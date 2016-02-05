#include <stdio.h>

int stringlength(char str[]);

int main()
{
	char str[] = "The quick brown fox";

	printf("The length of the string %s is %d\n", str, stringlength(str));

	return 0;
}

int stringlength(char str[])
{
	int i, length;

	length=0;

	for (i=0; str[i] != '\0'; i++)
		{
			length++;
		}

return length;

}