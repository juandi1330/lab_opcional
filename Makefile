# Nombre del ejecutable
TARGET = program

# Archivos fuente
SRC = main.c

# Compilador y banderas
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Regla por defecto: compilar
all: $(TARGET)

# Compilación del ejecutable
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Regla para limpiar archivos generados
clean:
	rm -f $(TARGET)

# Regla para ejecutar el programa
run: $(TARGET)
	./$(TARGET)
