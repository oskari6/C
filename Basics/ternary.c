#include <stdio.h>

int main()
{
    double money = 2000;
    double cost = 25;

    money > cost ? printf("you can afford it!\n") : printf("Sorry bro you need %lf more\n", cost - money);
    /*
    if (money > cost)
    {
        printf("You can afford it!\n");
    } else 
    {
        
    }
}
*/

return 0;
}