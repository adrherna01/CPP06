/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:10:46 by adrherna          #+#    #+#             */
/*   Updated: 2024/12/17 15:33:18 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <sys/_types/_uintptr_t.h>
#include <sys/types.h>

uintptr_t Serializer::serialize(Data *ptr)
{
	uintptr_t newPtr = reinterpret_cast<uintptr_t>(ptr);
	return newPtr;
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *newPtr = reinterpret_cast<Data*>(raw);
	return (newPtr);
}

Serializer::Serializer() {
	std::cout << "Serializer default constructor called" << std::endl;
}

Serializer::~Serializer() {
	std::cout << "Serializer destructor called" << std::endl;
}

Serializer::Serializer(const Serializer& s) {
	(void)s;
	std::cout << "Serializer copy constructor called" << std::endl;
}

Serializer& Serializer::operator=(const Serializer& s) {
	(void)s;
	std::cout << "Serializer copy assignment operator called" << std::endl;
	return *this;
}
