CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCDIR = srcs
INCDIR = includes

TARGET = libft.a
SOURCES = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c
OBJECTS = $(SRCDIR)/ft_putchar.o $(SRCDIR)/ft_swap.o $(SRCDIR)/ft_putstr.o $(SRCDIR)/ft_strlen.o $(SRCDIR)/ft_strcmp.o

all: $(TARGET)
	
$(TARGET): $(OBJECTS)
	ar cr $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS)	

fclean: clean
	rm -f $(TARGET)

re: fclean all