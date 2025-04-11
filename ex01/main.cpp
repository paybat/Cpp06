/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:40:21 by hidriouc          #+#    #+#             */
/*   Updated: 2025/04/11 09:53:06 by hidriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// main.cpp

#include <iostream>
#include "Serializer.hpp"

int main() {
	Data originalData;
	originalData.age = 42;
	originalData.name = "1337";

	std::cout << "Original Data address: " << &originalData << "\n";

	uintptr_t raw = Serializer::serialize(&originalData);
	std::cout << "Serialized uintptr_t: " << raw << "\n";

	Data* deserialized = Serializer::deserialize(raw);
	std::cout << "Deserialized pointer address: " << deserialized << "\n";

	if (deserialized == &originalData) {
		std::cout << "✅ Pointers match! Serialization and deserialization succeeded.\n";
	} else {
		std::cout << "❌ Pointers do NOT match!\n";
	}

	return 0;
}
