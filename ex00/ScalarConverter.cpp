/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:01:18 by hidriouc          #+#    #+#             */
/*   Updated: 2025/04/11 09:30:39 by hidriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter& to_cp){(void)to_cp;}
ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& org){(void)org; return *this;}
static bool isSpecialFloat(const std::string& s)
{
	return (s == "+inff" || s == "-inff" || s == "nanf");
}

static bool isSpecialDouble(const std::string& s)
{
	return (s == "+inf" || s == "-inf" || s == "nan");
}

static bool	isValidInt (const std::string& s)
{
	std::istringstream  is(s.c_str());
	int		nb;
	char	c;
	return (is >> nb && !(is >>c));
}

static bool	isValidNumber(const std::string& s)
{
	std::istringstream is(s.c_str());
	double	dnb;
	char	c;
	return (is >> dnb && !(is >> c));
}
static void	PrintValues(const double& value)
{
	std::cout << "char : ";
	if(value != value || value < 0 || value > 127)
		std::cout << "impossible" <<std::endl;
	else if (!std::isprint(static_cast<char>(value)))
		std::cout << "Non Displayable" << std::endl;
	else
		std:: cout << "'" << static_cast<char>(value) <<"'" <<std::endl;

	std::cout << "int : ";
	if (value != value || value < static_cast<double>(std::numeric_limits<int>::min()) || 
		value > static_cast<double> (std::numeric_limits<int>::max()))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) <<std::endl;

	std::cout << "float : ";
	float f = static_cast <float> (value);
	std::cout << f;
	if (f == static_cast<int> (f))
		std::cout << ".0";
	std::cout << "f" <<std::endl;

	std::cout << "double : ";
	std::cout << value;
	if (value == static_cast<int>(value))
		std::cout <<".0";
	std::cout <<std::endl;
}
void	ScalarConverter::convert(std::string literal)
{
	double	value = 0.0;
	
	if (literal.length() == 1 && !std::isdigit(literal[0])){
		value = static_cast<double>(literal[0]);
	} else if (isSpecialFloat(literal)){
		if(literal == "+inff")
			value = std::numeric_limits<float>::infinity();
		else if(literal == "-inff")
			value = -std::numeric_limits<float>::infinity();
		else
			value = std::numeric_limits<float>::quiet_NaN();
	} else if (isSpecialDouble(literal)){
		if (literal == "+inf")
			value = std::numeric_limits<double>::infinity();
		else if (literal == "-inf")
			value = -std::numeric_limits<double>::infinity();
		else
		 	value = std::numeric_limits<double>::quiet_NaN();
	} else if (literal[literal.length() - 1] == 'f'){
		std::string	nbr = literal.substr(0, literal.length() - 1);
		if (isValidNumber(nbr)){
			std::istringstream(nbr.c_str()) >> value;
		}
		else{
			std::cout << "Invalid float input" <<std::endl;
			return;	;
		}
	} else if (literal.find('.') != std::string::npos){
		if (isValidNumber(literal)){
			std::istringstream(literal) >> value;
		} else{
		std::cout << "Invalide double input "<<std::endl;
		return ;
		} 
	} else if (isValidInt(literal)) {
		std::istringstream(literal.c_str()) >> value;
	}else {
		std::cout << "Invalid input" << std::endl;
		return;
	}
	PrintValues(value);
}