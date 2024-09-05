#include<stdio.h>

int main(){
    int i, j, n, Echg;
    printf("Veuillez entrer le nombre des elements:");
    scanf("%d",&n);
    int Entier[n];
    for(i=0;i<n;i++){
        printf("Veuillez entrer l'element num %d :", i+1);
        scanf("%d",&Entier[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if (Entier[i]>Entier[j]){
                 Echg = Entier[i];
                 Entier[i] = Entier[j];
                 Entier[j] = Echg;
            }
        }
    }
     
    printf("\tLes elements du tableau en ordre croissant:\n");
    for(i=0;i<n;i++)
           printf("%d \n",Entier[i]);

    return 0;
}
