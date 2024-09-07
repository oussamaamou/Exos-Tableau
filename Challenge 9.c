#include<stdio.h>


int main(){
    int i,n;
    printf("Veuillez entrer le nombre des elements:");
    scanf("%d",&n);
    int Entier[n];
    int Invrs[n];
    for(i=0;i<n;i++){
        printf("Veuillez entrer la valeur de num %d :", i+1);
        scanf("%d",&Entier[i]);
    }
    for(i=0;i<n;i++){
        Invrs[n-1-i]=Entier[i];
    }
    printf("Les elements du tableau inverse sont:\n");
    for(i=0;i<n;i++)
         printf("la valeur inverse du num %d est: %d \n",i+1,Invrs[i]);
    
    
   
    return 0;
}
    
