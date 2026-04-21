#ifndef INVENTARIO_H
#define INVENTARIO_H

typedef enum { FALSO = 0, VERDADERO = 1 } Logico;

typedef struct {
    char id[4];
    char nombre[21];
    char descripcion[101];
} Objeto;

typedef struct {
    
    Objeto lista[5]; 
    int n_objetos;
    int capacidad;
} Inventario;

#define CAP_INICIAL 5

void inicializar_inventario(Inventario *inv);
Logico añadir_objeto(Inventario *inv, Objeto obj);
void mostrar_inventario(Inventario inv);
void free_inventario(Inventario *inv);
#endif