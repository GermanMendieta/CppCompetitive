#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>

#ifdef _WIN32
    #include <direct.h> // Para _mkdir en Windows
#else
    #include <unistd.h> // Para access en sistemas Unix
#endif

void createProject(const char *projectName) {
    // Crea la carpeta con el nombre del proyecto
    #ifdef _WIN32
        if (_mkdir(projectName) == -1) {
    #else
        if (mkdir(projectName, 0700) == -1) {
    #endif
        if (errno == EEXIST) {
            printf("Error: La carpeta '%s' ya existe.\n", projectName);
        } else {
            perror("Error al crear la carpeta");
        }
        return;
    }
    
    // Construir la ruta para el archivo main.cpp
    char filePath[100];
    snprintf(filePath, sizeof(filePath), "%s/main.cpp", projectName);

    // Abrir el archivo para escribir
    FILE *file = fopen(filePath, "w");
    if (file == NULL) {
        perror("Error al crear el archivo main.cpp");
        return;
    }

    // Contenido del archivo main.cpp
    const char *content = 
        "#include <iostream>\n\n"
        "using namespace std;\n\n"
        "int main() {\n"
        "    cout << \"Hello, World!\" << endl;\n"
        "    string name;\n"
        "    cout << \"Ingrese su nombre: \";\n"
        "    cin >> name;\n"
        "    cout << \"Hola, \" << name << \"!\" << endl;\n"
        "    return 0;\n"
        "}\n";

    // Escribir el contenido en el archivo
    fprintf(file, "%s", content);
    fclose(file);

    printf("Proyecto '%s' creado con un archivo main.cpp\n", projectName);
}

int main(int argc, char *argv[]) {
    // Verificar si el nombre del proyecto fue pasado como argumento
    if (argc < 2) {
        printf("Por favor, proporciona un nombre para el proyecto.\n");
        return 1;
    }

    // Crear el proyecto con el nombre proporcionado
    createProject(argv[1]);

    return 0;
}