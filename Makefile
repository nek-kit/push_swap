# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmoaney <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/01 19:25:54 by rmoaney           #+#    #+#              #
#    Updated: 2021/10/01 19:25:56 by rmoaney          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	ft_atoi.c		ft_bubble.c		ft_check_er.c		\
		ft_isdigit.c	ft_r.c			ft_rotater_1.c		\
		ft_rotater_2.c	ft_rr.c			ft_s_p.c			\
		ft_sort_1.c		ft_sort_5.c		ft_sort.c			\
		ft_strlen.c		main.c			ft_start_struct.c	\

OBJ = $(SRC:.c=.o)
HEADER = push_swap.h

FLAGS = -Wall -Wextra -Werror -g

all : $(NAME)

$(NAME) : $(OBJ)
	gcc -o $@ $(OBJ)
%.o : %.c Makefile $(HEADER)
	gcc $(FLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY:  all clean fclean re