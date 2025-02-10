/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:20:21 by adrherna          #+#    #+#             */
/*   Updated: 2024/12/18 14:07:41 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate()
{
	Base* newPtr;
	std::srand(std::time(0));
	int type = std::rand() % 3 + 1;

	if (type == 1)
		newPtr = new A();
	else if (type == 2)
		newPtr = new B();
	else
		newPtr = new C();
	return (newPtr);
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Unknown type" << std::endl;
	}
}

void identify(Base& p) {
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	} catch (std::bad_cast&) {
	}
	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	} catch (std::bad_cast&) {
	}
	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	} catch (std::bad_cast&) {
	}

	std::cout << "Unknown type" << std::endl;
}