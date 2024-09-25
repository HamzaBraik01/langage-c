#include <stdio.h>

int main() {
    // Déclaration de la variable 
    float kmh, ms;

    // Demande de la vitesse en km/h à 
    printf("Entrez la vitesse en km/h : ");
    scanf("%f", &kmh);

    // Conversion de la vitesse en m/s
    ms = kmh * 0.27778;

    // Affichage du résultat 
    printf("La vitesse en mètres par seconde est : %.2f m/s\n", ms);

    return 0;
}
