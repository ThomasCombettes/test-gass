#include <stdio.h>
#include <stdlib.h>


double moyenneTableau(int tableau[], int tailleTableau)
{
    int somme = 0;
    for(int i = 0; i < tailleTableau; i++)
    {
        somme += tableau[i];
    }


    
    return (double)somme/(double)tailleTableau;
}