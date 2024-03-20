#include <stdio.h>
#include <stdbool.h>

int main()
{
/*	other possibility:
	int myGrades[] = {10, 12, 14, 15, 16, 17, 54, 34, 23};
*/

	int myGrades[10];
	myGrades[0] = 10;
	myGrades[1] = 11;
	myGrades[2] = 12;

	printf("%d ", myGrades[0]);

	//index = 0 based number
	//element
	//size

	int x = myGrades[4] + 10;

	//reference entire array note no brackets
	myGrades

	return 0;
}


intmain()
{
	int size = 5;
	int myGrades[size];
	myGrades[0] = 10;
	myGrades[1] = 15;
	myGrades[2] = 20;
	myGrades[3] = 25;
	myGrades[4] = 30;

	for(int i = 0; i < size; i++;)
	{
		printf("%d ", myGrades[i]);	
	}
	printf("%d ", myGrades[2]);

	printf();

	return 0;
}
