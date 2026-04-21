#include <stdio.h>
#include <stdlib.h>
#include "interfaz.h"

int mostrar_menu_principal() {
    int op;
    printf("\n[1] Nueva Partida\n[2] Cargar Partida\n[3] Salir\n\nEleccion: ");
    scanf("%d", &op);
    /* ERROR DÍA 5: ¡Falta el while(getchar() != '\n')! 
       El 'Enter' se queda en el buffer y romperá el siguiente menú. */
    return op;
}

int mostrar_menu_acciones() {
    int op;
    printf("\nACCIONES DISPONIBLES:\n 1. Inspeccionar...");
    scanf("%d", &op);
    // Tampoco limpiamos aquí. El caos está asegurado.
    return op;
}