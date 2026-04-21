Viñeta 4: Div del cod



Evolución desde el Día 3:

Nacimiento de la modularidad. El proyecto ahora tiene 4 archivos en lugar de 1.

Los datos del inventario ahora viven en su propia estructura, aunque sea estática.



Fallos

1\. \*\*Desperdicio de Memoria:\*\* Reservamos espacio para 100 objetos aunque el jugador solo lleve uno. Todavía no conocemos a nuestro amigo `malloc`.

2\. \*\*Interfaz Sucia:\*\* La pantalla no se limpia. Después de 10 minutos de juego, tienes que hacer scroll infinito para ver dónde estás.

3\. \*\*Fragilidad:\*\* Si el usuario escribe una letra en lugar de un número en el menú, el programa entra en un bucle infinito de dolor.



> "He separado los archivos, pero todavía no entiendo por qué mi menú se vuelve loco si pulso Intro dos veces."

