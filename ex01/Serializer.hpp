/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:39:26 by hidriouc          #+#    #+#             */
/*   Updated: 2025/04/11 09:50:59 by hidriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cstdint> 
#include <iterator>

struct Data
{
	std::string	name;
	int			age;
	long		salary;
};

class	Serializer
{
	private:
	Serializer();
	Serializer(const Serializer& org);
	Serializer&	operator=(const Serializer& to_cp);
	~Serializer();
	
	public :
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif