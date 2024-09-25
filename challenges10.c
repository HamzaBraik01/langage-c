#include <stdio.h>
#include <math.h>
#define Pi 3.1415927

int main() {
    // Déclaration les variables
    double rayon, volume;
    
    // saisir le rayon 
    printf("Entrez le rayon de la sphère : ");
    scanf("%lf", &rayon);
    
    // Calcul du volume 
    volume = (4.0 / 3.0) * Pi * pow(rayon, 3);
    
    // Affichage du résultat
    printf("Le volume de la sphère est : %.2f\n", volume);
    
    return 0;
}