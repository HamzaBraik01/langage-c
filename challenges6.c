#include <stdio.h>
int main() {
     // Déclaration des variables pour les nombres a et b
    float a, b;
    //Saisie les nombres a et b
    printf("donnez le premair nombre a : " );
    scanf("%f", &a);
    
    printf("Entrez le second nombre b : ");
    scanf("%f", &b);
    //la fichage de a + b
    printf("a + b = %.2f\n", a + b);  
     //la fichage de a - b
    printf("a - b = %.2f\n", a - b);  
     //la fichage de a * b
    printf("a * b = %.2f\n", a * b);
    // la fichage de a / b
    if(b != 0){
        printf("a / b = %.2f\n", a / b);
    }else {
        printf("Division par zéro non définie !\n");
    }
    

    return 0;
}