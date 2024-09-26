#include <stdio.h>

int main() {
    int nombre, reste;
    int binaire[32];  
    int i = 0;
    int j;

    // la saisir de nombre
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    // Affichage de la valeur en hexadécimal
    printf("En hexadécimal : %x\n", nombre);

    if (nombre == 0) {
        printf("En binaire : \n");
    } else {
        
        while (nombre > 0) {
            reste = nombre % 2;    
            binaire[i] = reste;      
            nombre = nombre / 2;    
            i++;                    
        }
    //afichage de la valeurs en binaire
        printf("En binaire : ");
        for (j = i - 1; j >= 0; j--) {
            printf("%d", binaire[j]);  
        }
        
    }

    return 0;
}
