\# Viñeta 6:(Entrega Final)



El sistema de escape para la UCA está listo. Ya no hay fugas de memoria y el inventario es capaz de albergar cualquier tesoro encontrado.\*



Lo que hace este código final:

\* \*\*Inventario:\*\* Usa `realloc` para que la mochila crezca dinámicamente.

\* \*\*Interfaz:\*\* Limpia el buffer con `while(getchar() != '\\n');` para que los menús no salten.



El Corazón del Sistema:

```c

if (inv->n\_objetos == inv->capacidad) {

&#x20;   inv->capacidad \*= 2;

&#x20;   inv->lista = (Objeto \*) realloc(inv->lista, inv->capacidad \* sizeof(Objeto));

}

