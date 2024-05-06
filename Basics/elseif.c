//doctors office
//1. add patient
//2. view a patient
//3. search a patient
//4. exit

#include <stdio.h>

int main()
{
    printf("choose a menu option 1-4\n");
    printf("1. add patient\n");
    printf("2. view a patient\n");
    printf("3. search a patient\n");
    printf("4. exit\n");

    int input;
    scanf("%d", &input);

    if(input == 1)
    {
        printf("Adding a patient\n");
    } else if (input == 2)
    {
        printf("Viewing a patient\n");
    } else if (input == 3)
    {
        printf("Searching patients\n");
    }else if (input == 4)
    {
        printf("Exiting\n");
        printf("Do you want to save?");
        char q;
        
        getchar();

        scanf("%c", &q);

        if(q == 'Y' || q == 'y')
        {
            printf("Saving Changes\n");
        } else if(q == 'N' || q == 'n')
        {
            printf("Fine whatever\n");
        } else {
            printf("Hax\n");
        }
    } else
    {
        printf("incorrect input");
    }

    return 0;
}