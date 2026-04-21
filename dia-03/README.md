# Viñeta 3: 


Evolución desde el Día 2:
Mejora: El código ya no es una lista plana de instrucciones; ahora hay funciones como `dibujar_pantalla()` y `añadir_objeto_basico()`.
Organización Se intenta separar la lógica, pero todo sigue viviendo en el mismo archivo.

Fallos
1. **Variables Globales:** El inventario son arrays sueltos y globales. Cualquier parte del código puede romperlos sin querer.
2. **Sin Cabeceras:** No existen `interfaz.h` ni `inventario.h`. Si quieres cambiar algo del inventario, tienes que buscar entre cientos de líneas de código de interfaz.
3. **Mantenimiento Imposible:** Lobo tarda más tiempo en encontrar la función que quiere tocar que en escribir el código.



