#include <stdio.h>
#include <string.h>

// VARIABLES GLOBALES (Mala práctica que corregiremos en el futuro)
char inv_nombres[10][20]; // Solo caben 10 nombres de objetos
int inv_total = 0;
char sala_actual[50] = "Laboratorio de la ESI";

// --- FUNCIONES DE INVENTARIO ---
void añadir_objeto_basico(char* nombre) {
    if (inv_total < 10) {
        strcpy(inv_nombres[inv_total], nombre);
        inv_total++;
        printf("Has recogido: %s\n", nombre);
    } else {
        printf("Mochila llena.\n");
    }
}

// --- FUNCIONES DE INTERFAZ ---
void dibujar_pantalla() {
    printf("\n*********************************");
    printf("\n UBICACION: %s", sala_actual);
    printf("\n OBJETOS: %d", inv_total);
    printf("\n*********************************\n");
}

int main() {
    int opcion;
    
    printf("ESI-ESCAPE v0.1 (Prototipo)\n");
    
    while(1) {
        dibujar_pantalla();
        printf("1. Buscar objeto\n2. Salir\nEleccion: ");
        scanf("%d", &opcion);
        
        if (opcion == 1) {
            añadir_objeto_basico("Llave_Oxidada");
        } else {
            break;
        }
        // ERROR DÍA 3: Sin limpieza de pantalla ni de buffer. 
        // El texto se amontona y el teclado falla.
    }
    
    return 0;
}