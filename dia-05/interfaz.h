#ifndef INTERFAZ_H
#define INTERFAZ_H

#include "logica.h"
#include "mundo.h"

/**
 * @brief Muestra la carátula inicial.
 */
void mostrar_bienvenida();

/**
 * @brief Menú de acceso.
 */
int mostrar_menu_principal();

/**
 * @brief imprime la escena actual.
 */
void imprimir_escena(Partida p, Sala s);

/**
 * @brief Acciones del jugador.
 */
int mostrar_menu_acciones();

void mostrar_mensaje(char *msg);

#endif