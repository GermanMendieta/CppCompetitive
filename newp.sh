#!/bin/bash

# Verifica si el usuario pasó un nombre de proyecto
if [ -z "$1" ]; then
    echo "Por favor, proporciona un nombre para el proyecto."
    exit 1
fi

# Crea una carpeta con el nombre del proyecto
mkdir "$1"

# Crea el archivo main.cpp dentro de la carpeta
echo -e "#include <iostream>\n\nusing namespace std;\n\nint main() {\n    cout << \"Hello, World!\" << endl;\n    string name;\n    cout << \"Ingrese su nombre: \";\n    cin >> name;\n    cout << \"Hola, \" << name << \"!\" << endl;\n    return 0;\n}" > "$1/main.cpp"

echo "Proyecto '$1' creado con un archivo main.cpp"
