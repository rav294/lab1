#include <stdio.h>

int stringlength(char string[]);

int main()
{
	char string[] = "The quick brown fox";

	printf("The length of the string %s is %d\n", string, stringlength(string));

	return 0;
}

int stringlength(char string[])
{
	int i, length;

	length=0;

	for (i=0; string[i] != '\0'; i++)
		{
			length++;
		}

return length;

}