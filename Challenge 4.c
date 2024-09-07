#include<stdio.h>

int main(){
   int i;
   int n;
   
   printf("Veuillez entrer le nombre d'element du tableau:");
   scanf("%d",&n);
   int Elms[n];
   for(i=0;i<n;i++){
   printf("Veuillez entrer la valeur de l'element num %d :",i+1);
   scanf("%d",&Elms[i]);
   }
  
   int Max = Elms[0];
   for(i=0;i<n;i++){
       if (Max < Elms[i])
           Max = Elms[i];
   }
   printf("Le maximum des nombres du tableau est: %d",Max);
   
   

    return 0;
}
