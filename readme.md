
# Instrucciones para el Make

Para compilar un problema, utiliza el siguiente comando:

```bash
make pN
```

Donde `N` es el número del problema.

Para limpiar las compilaciones, utiliza el comando:

```bash
make clean
```

Para ejecutar un problema simplemente selecciona la carpeta y ejecuta el archivo a.exe
```bash
.\pN\a.exe
```

Donde `N` es el número del ejercicio.

# Intrucciones para creacion de problemas (opcional)
Para facilitar la creacion de problemas le recomendamos que compile el codigo newp.c en un ejecutable que permita la facil creacion de los problemas en c++

Para esto puede usar el comando:
```bash
gcc -o newp newp.c
```

Luego estando desde la carpeta puedes crear carpetas de problemas ejecutando el comando

```bash
.\newp.exe pN
```
Donde `N` es el número del problema.