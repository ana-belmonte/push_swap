# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 16:26:53 by aaires-b          #+#    #+#              #
#    Updated: 2023/10/24 10:35:58 by aaires-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# $^ = dependencies of the rule
# $@ = target of the rule / the file or exec we are trying to built
# $< = first dependency of a rule // ex: source file being compilied into 
# obj file
# -p = tells the make to create the directory if it doesnt already exist

NAME	=	push_swap
CHECKER = checker
SRCSDIR	= srcs
OBJDIR	= obj
CHECKER_OBJDIR = checker_obj

CFILES 	= create_stack.c ft_miniprintf.c ft_atoli.c operations.c \
		comands.c minisorts.c main.c resolved_stack.c sizestack.c \
		algoritm_big.c cost.c freestack.c organize_up.c rotate_a.c \
		parsing.c parsing_utils.c comands2.c cost2.c ft_bzero.c \
		ft_calloc.c operations2.c operations3.c get_next_line.c \
		get_next_line_utils.c 


CHECKER_FILES = create_stack.c ft_atoli.c comands.c resolved_stack.c sizestack.c \
			freestack.c parsing.c parsing_utils.c comands2.c  ft_bzero.c \
			ft_calloc.c check_moves.c checker_main.c get_next_line.c \
			get_next_line_utils.c 

OFILES 	= $(CFILES:.c=.o)
CHECKER_OBJS	= $(CHECKER_FILES:.c=.o)

SRCS 	= $(addprefix $(SRCSDIR)/, $(CFILES))
CHECKER_SRCS = $(addprefix $(SRCSDIR)/, $(CHECKER_FILES))
CHECKER_OBJS = $(patsubst $(SRCSDIR)/%.c, $(OBJDIR)/%.o, $(CHECKER_SRCS))
OBJS 	= $(patsubst $(SRCSDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))

CC		= cc 
CFLAGS	= -Wall -Werror -Wextra -g -fsanitize=address

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(CHECKER) : $(CHECKER_OBJS)
	$(CC) $(CFLAGS) $(CHECKER_OBJS) -o $(CHECKER)
	
$(OBJDIR)/%.o: $(SRCSDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

clean_checker:
	rm -rf $(CHECKER_OBJS)

fclean : clean

	rm -rf $(NAME)

fclean_checker: clean_checker
	rm -rf $(CHECKER)

re: fclean all 

re_checker: fclean_checker checker 

.PHONY: all, clean, fclean, re
	
