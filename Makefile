run:
	gcc -Wall -Wextra -Werror -Iinclude \
	main.c \
	src/creation/vector_create.c \
	src/math/vector_add.c