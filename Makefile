# Nombre del compilador
CXX = g++

# Opciones del compilador
CXXFLAGS = -Wall -std=c++11

# Subdirectorios de prácticas
CARPETAS = $(shell ls -d */ | sed 's#/##' | tr '\n' ' ')

# Para condicionar la ejecucion de los archivos durante la compilacion
R ?=

# Reglas para compilar todas las prácticas
.PHONY: all $(CARPETAS) clean

all: $(CARPETAS)

# Reglas para compilar cada práctica
$(CARPETAS):
	$(MAKE) compile DIR=$@

compile:
	@echo "================================================"
	$(CXX) $(CXXFLAGS) $(DIR)/main.cpp -o $(DIR)/a.exe 
	@echo "================================================"
# Si la variable R no esta definida se saltara la ejecucion del programa
ifdef R
	@echo "Ejecutando $(DIR)/a.exe"
	@./$(DIR)/a.exe	
endif

	

# Regla para limpiar los archivos generados en todas las prácticas
clean:
	@for dir in $(CARPETAS); do \
		rm -f $$dir/a.exe; \
	done
	@echo "Limpieza completada"
