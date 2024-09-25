#include <stdio.h>

int main() {
    // Déclaration des variables pour les nombres
    float nombre1;
    float nombre2;
    float nombre3;
    float moy;
    //Saisir des nombres
    printf("donnez le 1er nombre : ");
    scanf("%f",&nombre1);
    printf("donnez le 2ème nombre : ");
    scanf("%f",&nombre2);
    printf("donnez le 3ème nombre : ");
    scanf("%f",&nombre3);
    //calculer la moyenne pondérée
    moy=(nombre1*2+nombre2*3+nombre3*5)/10;
    //la fichage de resultat
    printf("La moyenne pondérée est : %.2f\n", moy);

    return 0;
}