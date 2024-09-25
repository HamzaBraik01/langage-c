#include <stdio.h>
int main() {
    // Déclaration de la variable 
    float C;

    // Demande de la température en Celsius
    printf("Entrez la température en Celsius : ");
    scanf("%f", &C);

    //l'état de l'eau
    if(C<0){
        printf("À %.2f°C, l'eau est à l'état solide glace.\n", C);
    }else if(C>=0 && C<100){
        printf("À %.2f°C, l'eau est à l'état liquide.\n", C);
    }else {
        printf("À %.2f°C, l'eau est à l'état gazeux vapeur.\n", C);
    }

    return 0;
}