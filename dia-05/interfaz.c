#include <stdio.h>
#include <stdlib.h>
#include "interfaz.h"

int mostrar_menu_principal() {
    int op;
    printf("\n[1] Nueva Partida\n[2] Cargar Partida\n[3] Salir\n\nEleccion: ");
    scanf("%d", &op);
    
    return op;
}

int mostrar_menu_acciones() {
    int op;
    printf("\nACCIONES DISPONIBLES:\n 1. Inspeccionar...");
    scanf("%d", &op);
   
    return op;
}