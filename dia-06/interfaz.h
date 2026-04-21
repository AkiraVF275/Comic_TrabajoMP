#ifndef INTERFAZ_H
#define INTERFAZ_H

// AÑADIDO: Incluimos los módulos que definen Partida y Sala
#include "logica.h"
#include "mundo.h"

/**
 * @brief Muestra la carátula inicial del juego.
 * Pre: Ninguna.
 * Post: Imprime el logo y espera a que el usuario pulse una tecla.
 */
void mostrar_bienvenida();

/**
 * @brief Gestiona el menú principal de acceso.
 * Pre: Ninguna.
 * Post: Devuelve un entero con la opción seleccionada.
 */
int mostrar_menu_principal();

/**
 * @brief Renderiza el estado del juego en pantalla.
 * Pre: 'p' y 's' inicializados con datos válidos.
 * Post: Limpia la terminal y muestra la descripción de la sala y estado.
 */
void imprimir_escena(Partida p, Sala s);

/**
 * @brief Muestra las acciones posibles del jugador.
 * Pre: Ninguna.
 * Post: Devuelve la opción elegida.
 */
int mostrar_menu_acciones();

/**
 * @brief Muestra un mensaje emergente de sistema.
 * Pre: msg no nulo.
 * Post: Imprime el mensaje con formato de aviso.
 */
void mostrar_mensaje(char *msg);

#endif