#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inventario.h"

/* Funciones externas requeridas (prototipos de otros modulos) */
extern void desbloquear_conexion_adyacente();
extern void iluminar_zona();
extern void mostrar_pista_mapa();

void inicializar_inventario(Inventario *inv) {
    inv->n_objetos = 0;
    inv->capacidad = CAP_INICIAL;
    inv->lista = (Objeto *) malloc(inv->capacidad * sizeof(Objeto));
    
    if (inv->lista == NULL) {
        fprintf(stderr, "Error: Fallo en la reserva de memoria dinámica.\n");
        exit(EXIT_FAILURE);
    }
}

Logico añadir_objeto(Inventario *inv, Objeto obj) {
    /* Si el inventario esta lleno, redimensionamos (Inventario Infinito) */
    if (inv->n_objetos == inv->capacidad) {
        inv->capacidad *= 2;
        inv->lista = (Objeto *) realloc(inv->lista, inv->capacidad * sizeof(Objeto));
        
        if (inv->lista == NULL) return FALSO;
    }
    
    inv->lista[inv->n_objetos] = obj;
    inv->n_objetos++;
    return VERDADERO;
}

void mostrar_inventario(Inventario inv) {
    int i;
    printf("\n[ MOCHILA ]\n");
    if (inv.n_objetos == 0) {
        printf(" No tienes objetos.\n");
    } else {
        for (i = 0; i < inv.n_objetos; i++) {
            printf(" - [%s] %-10s: %s\n", inv.lista[i].id, inv.lista[i].nombre, inv.lista[i].descripcion);
        }
    }
}

Logico usar_objeto(Inventario *inv, char *id_obj) {
    Logico exito = FALSO;

    if (strcmp(id_obj, "MAP") == 0) {
        printf("\n[SISTEMA]: El mapa revela un atajo por la biblioteca.\n");
        mostrar_pista_mapa();
        exito = VERDADERO;
    } else if (strcmp(id_obj, "LIN") == 0) {
        printf("\n[SISTEMA]: Enciendes la linterna. El laboratorio se ilumina.\n");
        iluminar_zona();
        exito = VERDADERO;
    } else if (strcmp(id_obj, "MAR") == 0) {
        printf("\n[SISTEMA]: ¡CRASH! Has roto el cristal de la alarma.\n");
        desbloquear_conexion_adyacente();
        exito = VERDADERO;
    }

    if (!exito) printf("\n[ERROR]: No puedes usar ese objeto aqui.\n");
    return exito;
}

void free_inventario(Inventario *inv) {
    if (inv->lista != NULL) {
        free(inv->lista);
        inv->lista = NULL;
    }
    
    inv->n_objetos = 0;
    inv->capacidad = 0;
}