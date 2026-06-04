#include <stdio.h>
#include "calculadora.h"

int main() {
    int opcion;
    float num1, num2, resultado;

    printf("=== CALCULADORA EN C ===\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    switch(opcion) {
        case 1:
            resultado = sumar(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 2:
            resultado = restar(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 3:
            resultado = multiplicar(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 4:
            if (num2 == 0) {
                printf("Error: No se puede dividir entre cero.\n");
            } else {
                resultado = dividir(num1, num2);
                printf("Resultado: %.2f\n", resultado);
            }
            break;

        default:
            printf("Opcion no valida.\n");
            break;
    }

    return 0;
}