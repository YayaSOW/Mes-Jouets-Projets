// Addition of two matrix
#include<stdio.h>
#define N 10

int main(){
int m,n,c,d,first[N][N],second[N][N],sum[N][N];
printf("Entrez le nbre de lignes et de colonnes de la matice: \n");
scanf("%d%d",&m,&n);
printf("Entrez l'element de la premiere matice: \n");
for (c=0;c<m;c++){
    for(d=0;d<n;d++){
        scanf("%d",&first[c][d]);
    }
}
printf("Entrez l'element de la seconde matice: \n");
for (c=0;c<m;c++){
    for(d=0;d<n;d++){
        scanf("%d",&second[c][d]);
    }
}
printf("Sum of entered matrix:-\n");
for (c=0;c<m;c++){
    for(d=0;d<n;d++){
        sum[c][d]=first[c][d]+second[c][d];
        printf("%d\t",sum[c][d]);
        printf("\n");
    }
}

return 0;
}
