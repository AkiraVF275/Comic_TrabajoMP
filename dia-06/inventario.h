#ifndef INVENTARIO_H
#define INVENTARIO_H

// Definimos el tipo lógico para no depender de archivos externos
typedef enum { FALSO = 0, VERDADERO = 1 } Logico;

typedef struct {
    char id[4];
    char nombre[21];
    char descripcion[101];
} Objeto;

typedef struct {
    Objeto *lista;
    int n_objetos;
    int capacidad;
} Inventario;

#define CAP_INICIAL 5

void inicializar_inventario(Inventario *inv);
Logico añadir_objeto(Inventario *inv, Objeto obj);
void mostrar_inventario(Inventario inv);
Logico usar_objeto(Inventario *inv, char *id_obj);
void free_inventario(Inventario *inv);

#endif