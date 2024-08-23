#include <stdio.h>
#include <time.h>  // Incluir la biblioteca time.h para medir el tiempo

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int numero;

    printf("Introduce un número entero positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        // Iniciar el cronómetro
        clock_t start_time = clock();

        // Calcular el factorial
        int resultado = factorial(numero);

        // Detener el cronómetro
        clock_t end_time = clock();

        // Calcular el tiempo de ejecución
        double execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

        // Mostrar el resultado y el tiempo de ejecución
        printf("El factorial de %d es %d\n", numero, resultado);
        printf("Tiempo de ejecución: %f segundos\n", execution_time);
    }

    return 0;
}

