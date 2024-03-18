# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaires-b <aaires-b@@student.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 16:26:53 by aaires-b          #+#    #+#              #
#    Updated: 2024/03/18 14:23:03 by aaires-b         ###   ########.fr        #
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

RESET=\033[0m
BOLD=\033[1m
RED=\033[31m
GREEN=\033[32m
YELLOW=\033[33m
BLUE=\033[34m
MAGENTA=\033[35m
CYAN=\033[36m

all : $(NAME)

$(OBJDIR)/%.o: $(SRCSDIR)/%.c | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "$(GREEN)Compiling push_swap $(RESET)"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(YELLOW)Done$(RESET)"

$(CHECKER) : $(CHECKER_OBJS)
	@echo "$(GREEN)Compiling checker $(RESET)"
	@$(CC) $(CFLAGS) $(CHECKER_OBJS) -o $(CHECKER)
	@echo "$(YELLOW)Done$(RESET)"

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@echo "$(CYAN)Cleaning object files$(RESET)"
	@rm -rf $(OBJDIR)
	@echo "$(YELLOW)Done$(RESET)"

clean_checker:
	@echo "$(CYAN)Cleaning checker object files$(RESET)"
	@rm -rf $(CHECKER_OBJS)
	@echo "$(YELLOW)Done$(RESET)"

fclean : clean
	@echo "$(CYAN)Cleaning push_swap executable$(RESET)"
	@rm -rf $(NAME)
	@echo "$(YELLOW)Done$(RESET)"

fclean_checker: clean_checker
	@echo "$(CYAN)Cleaning checker executable$(RESET)"
	@rm -rf $(CHECKER)
	@echo "$(YELLOW)Done$(RESET)"

re: fclean all 

re_checker: fclean_checker checker 

.PHONY: all, clean, fclean, re
	
