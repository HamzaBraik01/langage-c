#include <stdio.h>

int main() {
     // Déclaration des variables
     double C;
     double K;
      // Saisie  la température en Celsius
      printf("Entrez la temperature en Celsius : ");
      scanf("%lf",&C);
      K = C + 273.15;
      //Affichage la transforme en Kelvin Formule
    printf("la transforme en Kelvin Formule est : %lf",K);

    return 0;
}