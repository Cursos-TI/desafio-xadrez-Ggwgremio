#include <stdio.h>

void Rainha(int numero){
    if (numero <= 8){
        printf("esquerda %d \n", numero);

        Rainha(numero + 1);
    }
}

void Torre(int casa){
    if (casa <= 5){
        printf("direita %d \n", casa);

        Torre(casa + 1);
    }
}

int main() {
    int rainha = 1, bispox = 1, bispoy = 1, torre = 1;
    int a , b;

    printf("Bispo\n");
    while (bispox <= 1)
    {
        while (bispoy <= 5)
    {
            printf("direita %d, cima %d\n", bispox, bispoy);
            bispoy++;
            bispox++;

    }
    
    }
   
    printf("\nTorre\n");
        Torre(torre);

    printf("\nRainha\n");
        Rainha(rainha);

    printf("\nCavalo\n");

    for (a = 1, b = 1; a <= 1 && b <= 3; a++, b++){
        printf("cima %d, direita %d, direita %d, direita %d\n", a, b, b+1, b+2);
    }

    return 0;
}
