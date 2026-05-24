run:
	gcc -Wall -Wextra -Werror -Iinclude \
	main.c \
	src/creation/vector_create.c \
	src/math/vector_add.c \
	src/math/vector_scalar_mult.c \
	src/io/vector_parser.c