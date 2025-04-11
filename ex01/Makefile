# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 08:38:53 by hidriouc          #+#    #+#              #
#    Updated: 2025/04/11 09:47:26 by hidriouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

S_file = main.cpp Serializer.cpp
O_file = ${S_file:.cpp=.o}

Cpp  = c++

NAME = Serializer

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

%.o : %.cpp Serializer.hpp
	c++ ${FLAGS} -c $< -o $@

all: ${NAME}

${NAME} : ${O_file}
	c++ ${FLAGS} $^ -o ${NAME}

clean :
	rm -f ${O_file}

fclean : clean
	rm -rf ${NAME}

re : fclean all