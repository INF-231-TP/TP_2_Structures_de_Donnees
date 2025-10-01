# Nom de l'exécutable
EXEC = programme

# Compilateur
CC = gcc

# Options de compilation
CFLAGS = -Wall -Wextra -g

# Fichiers sources et objets
SRC = main.c fonction.c
OBJ = $(SRC:.c=.o)

# Règle principale
all: $(EXEC)

# Edition de liens
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

# Compilation des .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage
clean:
	rm -f $(OBJ) $(EXEC)

