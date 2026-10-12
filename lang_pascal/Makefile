## Makefile for "Guess My Number" version Free Pascal

CC   = fpc
FLGS = -vwnh -vm11030,11031 -Seh -Co -Cr -Mobjfpc
NAME = guess-my-number-fpc
MAIN = main.pas
SRCS = maintui.pas game.pas variables.pas

.PHONY: all
all: $(NAME)

$(NAME): $(SRCS) $(MAIN)
	mkdir -p .tmp
	$(CC) $(FLGS) $(MAIN) -FU.tmp -o"$(NAME)"

.PHONY: run
run: $(NAME)
	./$(NAME)

.PHONY: clean
clean:
	rm -rf .tmp $(NAME)
