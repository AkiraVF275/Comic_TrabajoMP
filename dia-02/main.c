#include <stdio.h>

int m
    int opt; 
    int inv = 0; 
    int s = 1; // sala 1

    printf("--- JUEGO ESI ---\n");

    while(1) {
        if(s == 1) {
            printf("Estas en el pasillo. 1. Ir laboratorio, 2. Salir: ");
        } else if (s == 2) {
            printf("Estas en el laboratorio. 1. Volver, 2. Coger llave: ");
        }

        scanf("%d", &opt);

        // Lógica ultra-anidada y difícil de leer
        if(s == 1) {
            if(opt == 1) s = 2;
            else break;
        } else if(s == 2) {
            if(opt == 1) s = 1;
            else if(opt == 2) {
                inv = 1;
                printf("Llave cogida.\n");
            }
        }
        
    }

    return 0;
}