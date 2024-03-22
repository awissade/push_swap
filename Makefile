# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awissade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 16:05:12 by awissade          #+#    #+#              #
#    Updated: 2024/03/18 17:38:26 by awissade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=		cc
CFLAGS		=		-Wextra -Werror -Wall

LIBFT_DIR	=		./libft
LIBFT		=		$(LIBFT_DIR)/libft.a

NAME		=		push_swap

S_FILES		=		main.c help_functions/check_arguments.c

O_FILES		=		$(S_FILES:%.c=%.o)

all			:		$(NAME)


$(NAME)		:		$(LIBFT) $(O_FILES)
			$(CC) $(CFLAGS) $(O_FILES) $(LIBFT) -o $(NAME)

$(LIBFT)	:
			@make -C $(LIBFT_DIR)
			@make -C $(LIBFT_DIR) bonus

clean		:
			rm -rf $(O_FILES)
			@make -C $(LIBFT_DIR) clean

fclean		:		clean
			rm -rf $(NAME)
			@make -C $(LIBFT_DIR) fclean

re			:		fclean all

.PHONY		:		all clean fclean re
