#include<stdio.h>
#include<math.h>

int main(){
    int i, n;
    int S;
    printf("Veuillez saisir le nombre d'element du tableau:");
    scanf("%d",&n);
    int Entier[n];
    for(i=0;i<n;i++){
        printf("Veuillez entrer l'element num %d:", i+1);
        scanf("%d",&Entier[i]);
    }
    S = 0;
    for(i=0;i<n;i++){
        S = S + Entier[i];
    }
    printf("La somme des elements du tableau est: %d",S);
    
  
    

    return 0;
}
