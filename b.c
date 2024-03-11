#include <stdio.h>
int main() {
    int numero;
    do {
        printf("Ingrese un número entero positivo: ");
        scanf("%d", &numero);
        if (numero <= 0) {
            printf("El número debe ser positivo. Inténtelo de nuevo.\n");
        }
    } while (numero <= 0);
    printf("Ha ingresado el número %d\n", numero);
    return 0;
}