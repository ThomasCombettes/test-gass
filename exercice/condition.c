#include <stdio.h>
#include <stdlib.h>

int main()
{

    int choixmenu=0;

    printf("bienvenue chez MacGass !\n");
    printf("*****MENU*****\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n");
    
    scanf("%d", &choixmenu);

    switch (choixmenu)
    {
        case 1 :
            printf("vous avez choisi un Royal Cheese\n");
            break;

        case 2 :
            printf("vous avez choisi un Mc Deluxe\n");
            break;

        case 3 :
            printf("vous avez choisi un Mc Bacon\n");
            break;

        default :
            printf("vous avez choisi un Big Mac\n");
            break;
    }

    printf("bonne journee !\n");


return 0;

}   