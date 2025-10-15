CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

TARGET = libft.a
SRC = $(wildcard $(SRCDIR))/*.c
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
$(OBJ_DIR): 
	mkdir -p $(OBJ_DIR)

clean:
	rm -f $(OBJ)	

fclean: clean
	rm -f $(NAME)

re: fclean all