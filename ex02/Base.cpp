/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:04:26 by hidriouc          #+#    #+#             */
/*   Updated: 2025/04/11 10:20:48 by hidriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <typeinfo>

Base::~Base(){}

Base	*generate(void)
{
	std::srand(std::time(0));

	int random = std::rand() % 3;
	switch (random) {
		case 0:
		return new A();
		case 1:
		return new B();
		default:
		return new C();
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p)) {
		std::cout << "✅ Generated type: A\n";
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "✅ Generated type: B\n";
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "✅ Generated type: C\n";
	} else {
		std::cout << "❌ Unknown type!\n";
	}
}

void	identify(Base& p)
{
	try{
		(void)dynamic_cast<A&> (p);
		std::cout << "✅ Generated type: A" <<std::endl;
		return ;
	}catch(std::bad_cast& bcast){}
	try{
		(void)dynamic_cast<B&> (p);
		std::cout << "✅ Generated type: B" <<std::endl;
		return ;
	}catch(std::bad_cast& bcast){}
	try{
		(void)dynamic_cast<C&> (p);
		std::cout << "✅ Generated type: C" <<std::endl;
		return ;
	}catch(std::bad_cast& bcast){}
	std::cout << "Unknown type !!" << std::endl;
}