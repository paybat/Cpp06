# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/10 10:18:42 by hidriouc          #+#    #+#              #
#    Updated: 2025/04/10 10:23:30 by hidriouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

S_file = main.cpp ScalarConverter.cpp
O_file = ${S_file:.cpp=.o}

Cpp  = c++

NAME = convert

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

%.o : %.cpp ScalarConverter.hpp
	c++ ${FLAGS} -c $< -o $@

all: ${NAME}

${NAME} : ${O_file}
	c++ ${FLAGS} $^ -o ${NAME}

clean :
	rm -f ${O_file}

fclean : clean
	rm -rf ${NAME}

re : fclean all