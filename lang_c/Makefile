## Makefile for "Guess My Number" version C

CC   = gcc
FLGS = -Wextra -Wall -Wconversion -Werror -Wstrict-prototypes
NAME = guess-my-number-gcc
SRCS = game.c main.c
HDRS = game.h

.PHONY: all
all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	$(CC) $(FLGS) $(SRCS) -o $(NAME)

.PHONY: run
run: $(NAME)
	./$(NAME)

.PHONY: clean
clean:
	rm -f $(NAME) *.o
