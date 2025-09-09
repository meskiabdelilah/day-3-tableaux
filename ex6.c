#include <stdio.h>

int main(){

    int taille;
    int mul ;
    
      printf("entre la taille du tableau:");
      scanf("%d", &taille);

    int tableau[taille];

    for (int i = 0; i < taille; i++)
    {
      printf("entre l'element %d du tableau:", i+1);
      scanf("%d", &tableau[i]);
    }

      printf("entre le facteur de multiplication:");
      scanf("%d", &mul);
      printf("la multiplication du tableau est \n" );
      
    for (int i = 0; i < taille; i++){ 
        int somme = mul * tableau[i]; 
        printf("%d = %d  x %d \n", somme, tableau[i] , mul);
    }
   
   return 0;
}