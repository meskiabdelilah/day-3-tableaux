#include <stdio.h>

int main(){
    int taille ;

    printf("entre la taille du tableau:");
    scanf("%d", &taille);

    int T[taille];
     
   for (int  i = 0; i < taille; i++)
    { 
        printf("entre l'element du tableau:", i+1);
        scanf("%d", &T[i]);
    }

     int max = T[0];

    for (int i = 0; i < taille; i++)
    {
        if (T[i] > max)
        {
            max = T[i];
        }      
    }
        printf("max l'element est %d", max);
    return 0;
}