#include <stdio.h>
#include <stdbool.h>

int main()
{

	//initialization, comparison, update

	//initialization
	//do
	//{
		//code
		//update
	//} while ( /* comparison */);

	int input;
	do
	{
		printf("Please enter a number 0-9: ");
		scanf("%d", input);
	} while (input < 0 || input > 9);

	return 0;
}