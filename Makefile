## Makefile for "Guess My Number" all language versions

LANGS   = lang-c lang-pascal
SELECT ?= $(shell bash -c 'echo -e \
		"Game variants (language implementation): \n \
		\t 1 - C           \n \
		\t 2 - Free Pascal \n \
		                   \n \
		\t 0 - Exit        \n \
		" >&2; \
		read -p "> Select game variant: " select; \
		if   [ "$$select" = "1" ]; then echo "c"; \
		elif [ "$$select" = "2" ]; then echo "pascal"; \
		elif [ "$$select" = "0" ]; then echo "exit"; \
		else echo "error"; \
		fi ')

.PHONY: all
all:
	make $(SELECT)

.PHONY: c
c: lang-c
	make -C lang-c run

.PHONY: pascal
pascal: lang-pascal
	make -C lang-pascal run

.PHONY: error
error: exit

.PHONY: exit
exit:
	exit

.PHONY: clean
clean:
	for LANG in $(LANGS); do make -C $$LANG clean; done
