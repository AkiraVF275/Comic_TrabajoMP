#ifndef INVENTARIO_H
#define INVENTARIO_H

#define VERDADERO 1
#define FALSO 0

typedef struct {
    char id[4];
    char nombre[20];
    char desc[50]; // Descripción más corta que en el futuro
} Objeto;

typedef struct {
    Objeto lista[100]; // Array estático: desperdicia mucha RAM
    int total;
} Inventario;

void inicializar(Inventario *inv);
int agregar(Inventario *inv, Objeto obj);
void ver_mochila(Inventario inv);
#endif