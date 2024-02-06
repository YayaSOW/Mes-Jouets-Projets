#include<stdio.h>
#define N 10
int main(){
int n,i,j,c,t[N];
do{
    printf("Entrez le nbre d'entier a saisir:\n");
    scanf("%d",&n);
}while(n<=0);
printf("Entrez l'entier a saisir:\n");
for(i=0;i<n;++i){
    scanf("%d",&t[i]);
}
for(i=0;i<=n;++i){
    for(j=i+1;j<n;++j){
        if(t[i]>t[j]){
            c=t[i];
            t[i]=t[j];
            t[j]=c;
        }
    }
}

   printf("Les valeurs du tableaux du plus pt au plus grand sont:\n");
    for(i=0;i<n;i++){
        printf("%d\n",t[i]);
    }

return 0;
}
