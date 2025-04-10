#include <stdio.h>
int main(){
int first,second,*p,*q,sum;
printf("Enter the two numbers:\n");
scanf("%d%d",&first,&second);
p=&first;
q=&second;
sum=*p+*q;
// affichage de la sum avec les variables
printf("La somme des entiers %d + %d = %d \n",first,second,sum);
// affichage de la sum avec les pointeurs
printf("La somme des entiers %d + %d = %d \n",*p,*q,sum);
printf("-------Avec variables mtn:-------\n");
printf("1ere valeur : %d \n",first);
printf("2eme valeur : %d \n",second);
printf("1ere valeur address : %d \n",&first);
printf("2eme valeur address : %d \n",&second);
printf("-------Avec Pointeurs mtn:-------\n");
printf("1ere valeur : %d \n",*p);
printf("2eme valeur : %d \n",*q);
printf("1ere valeur address : %d \n",p);
printf("2eme valeur address : %d \n",q);

return 0;
}
