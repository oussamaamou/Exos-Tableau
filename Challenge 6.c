#include<stdio.h>

int main(){
    int i,n;
    
    printf("Veuillez entrer le nombre des elements du tableau:");
    scanf("%d",&n);
    int Elms[n];
    for(i=0;i<n;i++){
        printf("Entrer la valeur de l'element num %d:", i+1);
        scanf("%d",&Elms[i]);
    }
    float F;
    printf("Veuillez entrer le facteur de multiplication:");
    scanf("%f",&F);
    for(i=0;i<n;i++){
        printf("%d * %f = %.2f\n",Elms[i],F,Elms[i]*F);
    }

return 0;
}
