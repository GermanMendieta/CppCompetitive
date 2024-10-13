# Este es un proyecto que busca proveer herramientas para optimizar y automaitizar el tiempo que toma crear problemas en C++, para entornos de trabajo Debian
## Instrucciones

Para compilar un problema, utiliza el siguiente comando:

```bash
make pN
```

Donde `N` es el número del problema.

Para limpiar las compilaciones, utiliza el comando:

```bash
make clean
```

Para ejecutar un problema, simplemente selecciona la carpeta y ejecuta el archivo correspondiente:

```bash
./pN/a.out
```

Donde `N` es el número del ejercicio.


## Instrucciones para creación de problemas (opcional)

Para facilitar la creación de problemas, te recomendamos que ejecutes el script `newp.sh` que permite la fácil creación de los problemas en C++.

Para esto, puedes usar primeramente el comando:

```bash
chmod +x newp.sh
```

Luego, desde la carpeta principal donde se encuentra el ejecutable, puedes crear carpetas de problemas ejecutando el comando:

```bash
./newp.sh pN
```
Donde `N` es el número del problema.
