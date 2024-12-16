/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:40:57 by adrherna          #+#    #+#             */
/*   Updated: 2024/12/16 13:11:40 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <ostream>
#include <string>
#include <sys/_types/_size_t.h>

void (*funcArray[])(const std::string&) = {toInt, toFloat, toDouble, toChar};

void ScalarConverter::convert(const std::string literal)
{
	std::cout << "literal: " << literal << std::endl;
	for (int i = 0; i < 4; i++)
		funcArray[i](literal);
}

bool isValid(const std::string& literal) {

	if (literal == "-inf" || literal == "+inf" || literal == "inf" ||
		literal == "-inff" || literal == "+inff" || literal == "inff" ||
		literal == "nan" || literal == "nanf") {
		return (true);
	}

	for (size_t i = 0; i < literal.length(); i++)
	{
		char ch = literal[i];

		if (!((ch >= '0' && ch <= '9') || ch == '+' || ch == '-' || ch == '.' || ch == 'f')) {
			return (false);
		}

		if (ch == 'f') {
			if (i != literal.length() - 1) {
				return (false);
			}
		}
	}
	return (true);
}

void toInt(const std::string& literal) {
	try
	{
		int var = static_cast<int>(std::stoi(literal));
		std::cout << "int: " << var << std::endl;
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
		if (!isValid(literal))
			throw std::invalid_argument("");
		float var = static_cast<float>(std::stof(literal));
		 std::cout << std::fixed << std::setprecision(1) << "float: " << var << "f" << std::endl;
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
		if (!isValid(literal))
			throw std::invalid_argument("");
		double var = static_cast<double>(std::stod(literal));
		std::cout << std::fixed << std::setprecision(1) << "double: " << var << std::endl;
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
	if (literal.length() == 1 && isprint(literal[0])) {
		std::cout << "Converted to char: '" << literal[0] << "'" << std::endl;
	} else {
		std::cout << "Literal cannot be converted to a displayable char." << std::endl;
	}
}
