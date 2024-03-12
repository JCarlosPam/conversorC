#include <stdio.h>

// Función para convertir de quetzales a dólares estadounidenses
float quetzales_a_dolares(float cantidad) {
    return cantidad / 7.73; // Tipo de cambio aproximado
}

// Función para convertir de dólares estadounidenses a quetzales
float dolares_a_quetzales(float cantidad) {
    return cantidad * 7.73; // Tipo de cambio aproximado
}

// Función para convertir de euros a dólares estadounidenses
float euros_a_dolares(float cantidad) {
    return cantidad * 1.12; // Tipo de cambio aproximado
}

// Función para convertir de dólares estadounidenses a euros
float dolares_a_euros(float cantidad) {
    return cantidad / 1.12; // Tipo de cambio aproximado
}

int main() {
    int opcion;
    float cantidad;

    printf("Bienvenido al convertidor de monedas\n");
    printf("Seleccione una opción:\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Dólares a Quetzales\n");
    printf("3. Euros a Dólares\n");
    printf("4. Dólares a Euros\n");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch (opcion) {
        case 1:
            printf("%.2f quetzales son %.2f dólares\n", cantidad, quetzales_a_dolares(cantidad));
            break;
        case 2:
            printf("%.2f dólares son %.2f quetzales\n", cantidad, dolares_a_quetzales(cantidad));
            break;
        case 3:
            printf("%.2f euros son %.2f dólares\n", cantidad, euros_a_dolares(cantidad));
            break;
        case 4:
            printf("%.2f dólares son %.2f euros\n", cantidad, dolares_a_euros(cantidad));
            break;
        default:
            printf("Opción inválida\n");
            break;
    }

    return 0;
}

