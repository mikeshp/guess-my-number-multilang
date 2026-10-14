## Makefile for "Guess My Number" language version: C

CC   = gcc
FLGS = -Wextra -Wall -Wconversion -Werror -Wstrict-prototypes
NAME = guess-my-number-gcc
MAIN = main.c
SRCS = game.c variables.c
HDRS = game.h variables.h

.PHONY: all
all: $(NAME)

$(NAME): $(MAIN) $(SRCS) $(HDRS)
	$(CC) $(FLGS) $(MAIN) $(SRCS) -o $(NAME)

.PHONY: run
run: $(NAME)
	./$(NAME)

.PHONY: clean
clean:
	rm -f $(NAME) *.o
