NAME = libft_math.a
SRC_DIR = source
SRC_FILES = approx.c\
	vec2f/approx.c vec2f/construct.c vec2f/operators.c vec2f/common.c vec2f/common2.c vec2f/specific.c\
	vec3f/approx.c vec3f/construct.c vec3f/operators.c vec3f/common.c vec3f/common2.c vec3f/specific.c\
	vec4f/approx.c vec4f/construct.c vec4f/operators.c vec4f/common.c vec4f/common2.c\
	mat3f/operators.c mat3f/operators2.c mat3f/common.c mat3f/common2.c mat3f/inverse.c mat3f/geom.c\
	mat4f/operators.c mat4f/operators2.c mat4f/common.c mat4f/common2.c mat4f/inverse.c mat4f/geom.c
OBJ_DIR = obj
OBJ_FILES = $(SRC_FILES:.c=.o)
LIBFT_DIR = ../libft/
CC = gcc
C_FLAGS = -Wall -Wextra -Werror -I. -I$(LIBFT_DIR)

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c ft_math.h Makefile
	@mkdir -p $(dir $@)
	$(CC) $(C_FLAGS) -c $< -o $@

$(NAME): $(addprefix $(OBJ_DIR)/,$(OBJ_FILES))
	ar rcs $(NAME) $(addprefix $(OBJ_DIR)/,$(OBJ_FILES))

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

tests/%: tests/%.c $(NAME)
	$(CC) $(C_FLAGS) $< $(NAME) -o $@
	./$@
	@rm -f $@

.PHONY: all norme clean fclean re
