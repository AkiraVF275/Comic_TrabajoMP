#ifndef INVENTARIO_H
#define INVENTARIO_H

typedef enum { FALSO = 0, VERDADERO = 1 } Logico;

typedef struct {
    char id[4];
    char nombre[21];
    char descripcion[101];
} Objeto;

typedef struct {
    // ERROR DEL DÍA 5: Usamos un array fijo en lugar de un puntero dinámico
    Objeto lista[5]; 
    int n_objetos;
    int capacidad;
} Inventario;

// Definimos el límite que causará el conflicto en la historia
#define CAP_INICIAL 5

void inicializar_inventario(Inventario *inv);
Logico añadir_objeto(Inventario *inv, Objeto obj);
void mostrar_inventario(Inventario inv);
// En el Día 5 no ponemos 'free_inventario' porque no hay memoria dinámica que liberar
#endif