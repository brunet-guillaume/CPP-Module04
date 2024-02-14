# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 14:06:15 by gbrunet           #+#    #+#              #
#    Updated: 2024/02/14 16:33:02 by gbrunet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = main.o Animal.o Dog.o Cat.o WrongAnimal.o WrongCat.o Brain.o

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean :
	make clean
	$(RM) $(NAME)

re :
	make fclean
	make all
