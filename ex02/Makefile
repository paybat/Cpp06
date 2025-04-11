# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 10:22:49 by hidriouc          #+#    #+#              #
#    Updated: 2025/04/11 10:53:53 by hidriouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

S_file = main.cpp Base.cpp
O_file = ${S_file:.cpp=.o}

Cpp  = c++

NAME = Identify

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

%.o : %.cpp Base.hpp
	c++ ${FLAGS} -c $< -o $@

all: ${NAME}

${NAME} : ${O_file}
	c++ ${FLAGS} $^ -o ${NAME}

clean :
	rm -f ${O_file}

fclean : clean
	rm -rf ${NAME}

re : fclean all