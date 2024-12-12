/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:40:57 by adrherna          #+#    #+#             */
/*   Updated: 2024/12/12 14:52:50 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <ostream>

void (*funcArray[])(const std::string&) = {toInt, toFloat, toDouble, toChar};


void ScalarConverter::convert(const std::string literal)
{
	std::cout << "literal: " << literal << std::endl;
	for (int i = 0; i < 4; i++)
		funcArray[i](literal);
}

void toInt(const std::string& literal) {
	try
	{
		std::cout << "to Int: " << std::stoi(literal) << std::endl;
	}
	catch (const std::invalid_argument& e)
	{
		std::cerr << "Invalid argument: " << literal << " is not a valid integer." << std::endl;
	}
	catch (const std::out_of_range& e)
	{
		std::cerr << "Out of range: " << literal << " is out of range for an integer." << std::endl;
	}
}

void toFloat(const std::string& literal) {
	try
	{
		std::cout << "to Float: " << std::stof(literal) << std::endl;
	}
	catch (const std::invalid_argument& e)
	{
		std::cerr << "Invalid argument: " << literal << " is not a valid float." << std::endl;
	}
	catch (const std::out_of_range& e)
	{
		std::cerr << "Out of range: " << literal << " is out of range for an float." << std::endl;
	}
}

void toDouble(const std::string& literal) {
	try
	{
		std::cout << "to Double: " << std::stod(literal) << std::endl;
	}
	catch (const std::invalid_argument& e)
	{
		std::cerr << "Invalid argument: " << literal << " is not a valid double." << std::endl;
	}
	catch (const std::out_of_range& e)
	{
		std::cerr << "Out of range: " << literal << " is out of range for an double." << std::endl;
	}
}

void toChar(const std::string& literal) {

	if (literal.length() == 1)
		std::cout << "Converted to char: " << literal[0] << std::endl;
	else
		std::cout << "Literal cannot be converted to char." << std::endl;
}
