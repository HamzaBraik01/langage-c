#include <stdio.h>

int main() {
    //declaration des varaibles
    char nom[20];
    char prenom[30];
    int age;
    char sexe[10];
    char email[100];
    //Saisie des informations
    printf("Entrez votre nom : ");
    scanf("%s", nom);

    printf("Entrez votre prénom : ");
    scanf("%s", prenom);

    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez votre sexe (Homme/Femme) : ");
    scanf("%s", sexe);

    printf("Entrez votre adresse email : ");
    scanf("%s", email);
    //affichage des informations
    printf("\n--affichage des informations--\n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Âge : %d ans\n", age);
    printf("Sexe : %s\n", sexe);
    printf("Email : %s\n", email);
    return 0;
}