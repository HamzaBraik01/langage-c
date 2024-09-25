#include <stdio.h>
#include <math.h>
int main() {
    // Déclaration des variables pour les nombres
    float nombre1;
    float nombre2;
    float nombre3;
    float moyge;
    //Saisir des nombres
    printf("donnez le 1er nombre : ");
    scanf("%f",&nombre1);
    printf("donnez le 2ème nombre : ");
    scanf("%f",&nombre2);
    printf("donnez le 3ème nombre : ");
    scanf("%f",&nombre3);
    //calculer la moyenne géométrique de trois nombres
    moyge=pow((nombre1*nombre2*nombre3),(1/3));
    //la fichage de resultat
    printf("la moyenne géométrique de trois nombres est : %.2f\n",moyge);

    return 0;
}