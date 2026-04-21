#include <stdio.h>
#include <stdlib.h>
#include "interfaz.h"

void mostrar_bienvenida() {
    printf("\n\t==============================================");
    printf("\n\t|        ESI-ESCAPE: MISION CADIZ v1.0       |");
    printf("\n\t|     Metodologia de la Programacion - UCA   |");
    printf("\n\t==============================================\n");
    printf("\n\t Pulse INTRO para comenzar la aventura...");
    fflush(stdout);
    getchar();
}

int mostrar_menu_principal() {
    int op;
    printf("\n[1] Nueva Partida\n[2] Cargar Partida\n[3] Salir\n\nEleccion: ");
    scanf("%d", &op);
    while(getchar() != '\n'); /* Limpiar buffer */
    return op;
}

void imprimir_escena(Partida p, Sala s) {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    // CORRECCIÓN: Usamos p.jugador_actual->nombre, s.idSala y s.nombreSala
    // (Asegúrate de que el puntero jugador_actual no sea NULL antes de llamar a esto)
    printf("\n| Jugador: %-16s | Sala: %-3s |\n", p.jugador_actual->nombre, s.idSala);
    printf("------------------------------------------------------------\n");
    printf(" UBICACION: %s\n", s.nombreSala);
    printf("------------------------------------------------------------\n");
    printf(" %s\n", s.descripcion);
    printf("------------------------------------------------------------\n");
}

int mostrar_menu_acciones() {
    int op;
    printf("\nACCIONES DISPONIBLES:\n");
    printf(" 1. Inspeccionar\n 2. Moverse\n 3. Inventario\n 4. Salir\n\nQue desea hacer?: ");
    scanf("%d", &op);
    while(getchar() != '\n'); // Buena práctica: limpiar el buffer aquí también
    return op;
}

void mostrar_mensaje(char *msg) {
    printf("\n>>> INFO: %s <<<\n", msg);
}