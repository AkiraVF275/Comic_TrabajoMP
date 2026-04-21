#include <stdio.h>
#include "inventario.h"

void inicializar(Inventario *inv) {
    inv->total = 0;
}

int agregar(Inventario *inv, Objeto obj) {
    if (inv->total < 100) {
        inv->lista[inv->total] = obj;
        inv->total++;
        return VERDADERO;
    }
    return FALSO;
}

void ver_mochila(Inventario inv) {
    for(int i=0; i<inv.total; i++) {
        printf("%d. %s\n", i+1, inv.lista[i].nombre);
    }
}