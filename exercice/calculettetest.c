#include <stdio.h>
#include <stdlib.h>


int main()

{
    double resultat=0, nombre1=0, nombre2=0, nombre3=0;

    printf("faites la moyenne de 3 nombre \n");

    printf("entrez le premier nombre \n");
    scanf("%lf", &nombre1);
    printf("entre le deuxieme nombre \n");
    scanf("%lf", &nombre2);
    printf("entrez le troisieme nombre \n");
    scanf("%lf", &nombre3);

    resultat = (nombre1 + nombre2 + nombre3) / 3;

    printf("la moyenne de %lf, %lf et %lf est egale a %lf", nombre1, nombre2, nombre3, resultat);
    
    return 0;

}