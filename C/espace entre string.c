#include <stdio.h>
#include <string.h>

int main() {
    char a[30];

    printf("Entrez la chaine de caracteres:\n");
    scanf("%s", a);

    int longueur = strlen(a);

    for (int i = 0; i < longueur; i++) {
        printf("%c", a[i]);

        if ((i + 1) % 3 == 0 && i != longueur - 1) {
            printf(" ");
        }
    }

    return 0;
}














/*
#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    int s;

    // Demander à l'utilisateur d'entrer une chaîne
    printf("Entrez une chaine de caracteres : ");
    fgets(chaine, sizeof(chaine), stdin);

    // Supprimer le saut de ligne (\n) ajouté par fgets
    chaine[strcspn(chaine, "\n")] = '\0';
    s=strcspn(chaine, "\n");
    printf("%d",s);

    int longueur = strlen(chaine);
    printf("%d",longueur);

    // Afficher la chaîne séparée par groupes de trois caractères
    printf("La chaine separee par caracteres de 3 : ");
    for (int i = 0; i < longueur; i++) {
        printf("%c", chaine[i]);

        // Ajouter un espace tous les trois caractères (sauf pour le dernier groupe)
        if ((i + 1) % 3 == 0 && i != longueur - 1) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
*/
