#include <stdio.h>

int main() {
    //declaration des varaibles
    int nombre;
    int chiffre1;
    int chiffre2;
    int chiffre3;
    int chiffre4;
    //saisir le nomber
    printf("donnez moi un nombre entier à quatre chiffres : ");
    scanf("%d",&nombre);
    chiffre1 = nombre % 10;
    chiffre2 = (nombre / 10)%10;
    chiffre3 = (nombre / 100)%10;
    chiffre4 = (nombre /1000);
    //partie d'affichage
    printf("L'inverse de %d est : %d%d%d%d\n", nombre, chiffre1, chiffre2, chiffre3, chiffre4);
    return 0;
}