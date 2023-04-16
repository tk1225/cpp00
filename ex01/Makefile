# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: takumasaokamoto <takumasaokamoto@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 18:31:13 by takuokam          #+#    #+#              #
#    Updated: 2023/04/16 18:55:54 by takumasaoka      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phonebook
FUNC	:= phonebook.cpp contact.cpp main.cpp
CC		:= c++ 
CFLAGS	:= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(FUNC) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
