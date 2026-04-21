#include <stdio.h>
#include "interfaz.h"

void saludo() {
    printf("--- BIENVENIDO A ESI-ESCAPE ---\n");
}

int menu() {
    int o;
    printf("1. Jugar\n2. Salir\nOpcion: ");
    scanf("%d", &o); 
    
    return o;
}

void dibujar_sala(char* nombre, char* desc) {
    printf("\nESTAS EN: %s\n", nombre);
    printf("SALA: %s\n", desc);
    printf("--------------------------\n");
}