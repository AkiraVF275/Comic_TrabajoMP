#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inventario.h"

void inicializar_inventario(Inventario *inv) {
    inv->n_objetos = 0;
    inv->capacidad = CAP_INICIAL; // Vale 5
    inv->lista = (Objeto *) malloc(inv->capacidad * sizeof(Objeto));
}

Logico añadir_objeto(Inventario *inv, Objeto obj) {
    /
    if (inv->n_objetos >= inv->capacidad) {
        printf("\n[ERROR]: Inventario lleno. No puedes llevar mas de 5 objetos.\n");
        return FALSO;
    }
    
    inv->lista[inv->n_objetos] = obj;
    inv->n_objetos++;
    return VERDADERO;
}

// ... resto de funciones (mostrar_inventario, etc.)