#include <stdio.h>
#include <stdlib.h>

int main()

{
  double resultat = 0, nombre1 = 0, nombre2 = 0;
  
  // On demande les nombres 1 et 2 à l'utilisateur :
  
  printf("Entrez le nombre 1 : ");
  scanf("%lf", &nombre1);
  printf("Entrez le nombre 2 : ");
  scanf("%lf", &nombre2);
  
  // On fait le calcul :
  
  resultat = nombre1 + nombre2;
  
  // Et on affiche l'addition à l'écran :
  
  printf ("%f + %f = %f\n", nombre1, nombre2, resultat);
       
  return 0;
}