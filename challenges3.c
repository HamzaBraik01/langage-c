#include <stdio.h>

int main() {
     // Déclaration des variables
     double Km;
     double Yards;
     // Saisie la distance en kilomètres
      printf("Entrez la distance en kilomètres : ");
      scanf("%lf",&Km);
      Yards = Km * 1093.61;
      //Affichage la transforme en yards
    printf("la transforme en yards : %lf",Yards);

    return 0;
}