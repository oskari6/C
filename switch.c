//switch statement
#include <stdio.h>

int main()
{
    int A = 'A';
    switch(A)
    {
        case (65):
            printf("Definitely A\n");
            break;
    }

    printf("how many slices do you eat? ");
    int slices;
    scanf("%d", &slices);
    int caloriesPerSlice = 250;

    switch(slices)
    {
        case 1:
            printf("You did a great job! ");
            break;
        case 2:
            printf("You did an ok job! ");
            break;
        case 3:
            printf("You did a bad job! ");
            break;
        case 4:
            printf("You are a dissapointment! ");
            break;
        default: //equivalent to else statement
            printf("Enjoy ");
            break;

    }

    printf("You had %d calories.", caloriesPerSlice * slices);

    return 0;
} //switch, for Ints, no ranges, limited option characters