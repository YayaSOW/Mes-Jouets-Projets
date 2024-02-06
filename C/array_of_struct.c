#include<stdio.h>
#define N 10
int main(){
int a[N][N],m,n,i,j,cpt=0;
do{
    printf("Entrez le nbre d'entier a saisir:\n");
    scanf("%d%d",&m,&n);
}while(m<=0 || n<=0);
printf("Entrez l'entier du tableau a:\n");
for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
}
for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==0){
                cpt++;
            }
        }
}
if(cpt>((n*m)/2)){
   printf("Le tableau contient plus de 0\n");
   }
   printf("Le nbre de 0 dans le tableau est :%d\n",cpt);

return 0;
}
