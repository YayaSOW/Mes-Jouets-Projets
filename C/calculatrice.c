#include<stdio.h>
int main(){
float a,b,s;
char op;
//do{
    printf("Entrez la valeur de a:\n");
    scanf("%f",&a);
    fflush(stdin);
    printf("Entrez l'operateur:\n");
    scanf("%c",&op);
    printf("Entrez la valeur de b:\n");
    scanf("%f",&b);
//}while()
switch(op){
    case'+':
        s=a+b;
        printf("la somme de %.2f + %.2f = %.2f",a,b,s);
        break;
    case'-':
        s=a-b;
        printf("la soustraction de %.2f - %.2f = %.2f",a,b,s);
        break;
    case'/':
        if(b==0){
            printf("division impossible!!!");
        }else{
            s=a/b;
        printf("la division de %.2f / %.2f = %.2f",a,b,s);
        }
        break;
    case'*':
        s=a*b;
        printf("la multiplication de %.2f * %.2f = %.2f",a,b,s);
        break;
    default:
        printf("Veuillez choisir un bon operateur");
}

return 0;
}
