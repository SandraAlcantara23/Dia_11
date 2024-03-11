#include <stdio.h>

int main() {
    int numero;
    float decimal;
    char caracter;

    // Solicitar al usuario que ingrese un número entero
    printf("Ingresa un número entero: ");
    scanf("%d", &numero);

    // Solicitar al usuario que ingrese un número decimal
    printf("Ingresa un número decimal: ");
    scanf("%f", &decimal);

    // Limpiar el buffer del teclado
    while (getchar() != '\n');

    // Solicitar al usuario que ingrese un caracter
    printf("Ingresa un caracter: ");
    scanf("%c", &caracter);

    // Mostrar los datos ingresados por el usuario
    printf("Has ingresado:\n");
    printf("Número entero: %d\n", numero);
    printf("Número decimal: %.2f\n", decimal);
    printf("Caracter: %c\n", caracter);

    return 0;
}
