#include <stdio.h>
#include <stdbool.h>

int main()
{
	for ( in i = 0; i < 60; i++)
	{
		printf("Helloo\n");
		if(i == 6) break;
	}
	int number = 23232;
	int i = 0;
	while(1)
	{
		//do something indefinately
		printf("%d", i);
		if(i == number)
		{
			printf("We found it!\n");
			break;
		}
		i++;
	}

	return 0;
}