#include <stdio.h>

int main (){
    int taille;
  
    printf("entre le nombre  de la taille du tableau: ");
    scanf("%d",&taille);

     int nombres [taille];
     int somme = 0;

    for(int i = 0; i < taille; i++ )
    {  
        printf("entre le nombre d'elements %d: ", i+1);
        scanf("%d", &nombres[i]);
        somme += nombres[i];
    }

    printf("\nla somme est: %d\n", somme);

  return 0;
}