#include <stdio.h>

int main() {
    char operador;
    double numero1, numero2, resultado;

    printf("Ingrese el operador que desea utilizar, puede ser +, -, *, / \n");
    scanf("%c", &operador);

    printf("Ingrese dos números: ");
    scanf("%lf %lf", &numero1, &numero2);

    switch (operador) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
            } else {
                printf("Error: No se puede dividir por cero\n");
                return 1; // Terminar el programa con un código de error
            }
            break;
        default:
            printf("Error: Operador no válido\n");
            return 1; // Terminar el programa con un código de error
    }

    printf("Resultado: %.2lf\n", resultado);
    return 0;
}
