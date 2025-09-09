#include <stdio.h>

int main(){
    
    int taille;

    printf("entre la taille du tableau:");
    scanf("%d", &taille);

    int tableau[taille];

    for (int  i = 0; i < taille; i++)
    {
        printf("entre l'element %d du tableau:", i+1);
        scanf("%d", &tableau[i]);
    }
        int min = tableau[0];

     for (int  i = 0; i < taille; i++)
     {
        if(tableau[i] < min)
        {
            min = tableau[i];
       }
    }
       printf("min l'element est %d",min);
 
    
return 0;

}