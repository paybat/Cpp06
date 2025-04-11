/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:14:28 by hidriouc          #+#    #+#             */
/*   Updated: 2025/04/11 08:30:44 by hidriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int ac, char *av[])
{
	if (ac == 2)
	{
		ScalarConverter sc;
		sc.convert(av[1]);
		return 0;
	} else {
		std::cerr << "Usage: ./convert <literal>" << std::endl;
		return 1;
	}
}