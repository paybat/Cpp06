/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 09:50:25 by hidriouc          #+#    #+#             */
/*   Updated: 2025/04/11 09:30:47 by hidriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <iostream>
#include <cctype>
#include <limits>
#include <string>
#include <sstream>

class ScalarConverter
{
	private:
	
	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& );
		ScalarConverter&	operator=(const ScalarConverter& org);
	
	static void	convert(std::string literal);
};

#endif

