#include <stdio.h>

int main()

{
	int fahren, celsius;
	printf("\nFahrenheit \t Celsius\n");
	printf("========== \t =======\n");

	for(fahren=0; fahren<=300; fahren=fahren+10)
	{
		celsius = 5*(fahren-32)/9;
	    printf("%10d \t %7d\n", fahren, celsius);
	}

	return 0;
		
}