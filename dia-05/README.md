\#Viñeta 5: Separación de Poderes (y sus errores)"



El código consigue tener mas orden. Ahora hay módulos mejor organizados. Pero al probarlo, la mochila se bloquea al quinto objeto y los menús pasan a toda velocidad sin dejarle elegir.



Evolución desde el Día 4:



\* \*\*Mejora:\*\* Introducción de `struct Inventario` y `struct Objeto`.



Los fallos de hoy:

1\. \*\*Memoria Rígida:\*\* En `inventario.c`, la función `añadir\_objeto` no usa `realloc`. El inventario tiene un muro insuperable de 5 espacios.

2\. \*\*Buffer "Fantasma":\*\* La falta de limpieza en los `scanf` de `interfaz.c` hace que el programa lea el "Enter" del usuario como una entrada nueva, saltándose pasos de la aventura.





