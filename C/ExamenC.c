/*
EXERCICE 1:
Créer un programme en C pemettant de lire (afficher) les données du fichier "personne.txt" sashant que la structure d'un étudiant est :
ETUDIANT:
    -> matricule (chaine de 20 caractères)
    -> nom (chaine de 20 caractères)
    -> prenom (chaine de 30 caractères)
    -> dateNaiss (chaine de 11 caractères)
    -> ville (chaine de 20 caractères)
    -> tel (chaine de 10 caractères)
    -> email (chaine de 50 caractères)
    -> moyenne (réel)
NB:
Vous devez adopter l'affichage l'executable "affichageListe.exe"
------------------------------------------------------------------
*/
#include<stdio.h>
#define N 1000
int main(){
    typedef struct{
    char matricule[20];
    char nom[20];
    char prenom[30];
    char dateNaiss[11];
    char ville[50];
    char tel[10];
    char email[50];
    float moyenne;
}Etudiant;
   char f1 [25];
    char f2 [25];
    char resul;
    char table[N];
    int cpt=0;
printf("Entrer le nom du fichier 1 \n");
gets(f1);
printf("Entrer le nom du fichier 2 \n");
gets(f2);
FILE *f=fopen(f1,"r");
FILE *L=fopen(f2,"w");
if(f){
//    printf("-----------------------------------------\n");
    while(resul=fgetc(f),resul!=EOF){
       if(resul=="\0"||resul==' '){
            printf("\n");
//            table[N]=resul;
            printf("-----------------------------------------\n");
       }else{
            printf("%c",resul);
       }
        fputc(resul,L);
        cpt++;
//        system("cls");
        //system("pause 0.0001");
//        printf("%d\n",cpt);
    }
    printf("-----------------------------------------\n");
//    for (int i=0;i<N;i++)
//        printf("%c",table[i]);
    printf("le nbre de caractere copie est %d\n",cpt);
        fclose(f);
        fclose(L);
}else{
    printf("error");
}
//    FILE *fichier=fopen("personne.txt","r");
//    fprintf(fichier,"%s %s %s %s %s %s %s d%\n",Etudiant.matricule,
//                                      Etudiant.nom,
//                                      Etudiant.prenom,
//                                      Etudiant.dateNaiss,
//                                      Etudiant.ville,
//                                      Etudiant.tel,
//                                      Etudiant.email,
//                                      Etudiant.moyenne);

return 0;
}
