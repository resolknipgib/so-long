NAME 	= so_long

CC 	= gcc

CFLAGS 	= -Wall -Wextra -Werror 

SRCS 	=		./utils/ft_strdup.c\
			./utils/ft_putchar_fd.c\
			./utils/ft_putstr_fd.c\
			./utils/ft_join_strings.c\
			./utils/ft_itoa.c\
			./utils/ft_get_map.c\
			./utils/ft_movement.c\
			./utils/ft_split.c\
			./utils/ft_put_image.c\
			./utils/ft_put_text.c\
			./get_next_line/get_next_line_utils.c\
			./get_next_line/get_next_line.c\
			./utils/ft_check_file_is_valid.c\
			./utils/ft_check_map_utils.c\
			./utils/ft_check_map.c\
			./utils/ft_animation.c\
			./utils/ft_animation_utils.c\
			./utils/ft_exit_door.c\
			so_long.c

all: $(NAME)

OBJS	= $(SRCS:.c=.o)

$(NAME) : $(OBJS) 
	@$(CC) -lmlx -framework OpenGL -framework AppKit  $^ -o $@
%.o:%.c
	@$(CC) $(CFLAGS) -c $^ -o $@

clean: 
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
