#include <stdio.h>

int main (){
    int taille;
  
    printf("entre le nombre  de la taille du tableau: ");
    scanf("%d",&taille);

     int nombres [taille];
    
    for(int i = 0; i < taille; i++ )
    { printf("entre le nombre d'elements %d: ", i+1);
     scanf("%d", &nombres[i]);
    }

    for (int  i = 0; i < taille; i++)
    {
      printf("%d ", nombres[i]);
    }
  
  return 0;
}