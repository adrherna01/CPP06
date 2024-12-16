/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:10:34 by adrherna          #+#    #+#             */
/*   Updated: 2024/12/16 13:11:26 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string testArray[] = {
		"0",		  // Zero
		"-42",		// Negative integer
		"2147483647", // Maximum 32-bit signed integer
		"-2147483648",// Minimum 32-bit signed integer
		"0.0f",	   // Zero as float
		"-4.2f",	  // Negative float
		"4.2f",	   // Positive float
		"-inff",	  // Negative infinity (float pseudo-literal)
		"+inff",	  // Positive infinity (float pseudo-literal)
		"nanf",	   // Not-a-Number (float pseudo-literal)
		"0.0",		// Zero as double
		"-4.2",	   // Negative double
		"-inf",	   // Negative infinity (double pseudo-literal)
		"+inf",	   // Positive infinity (double pseudo-literal)
		"nan",		// Not-a-Number (double pseudo-literal)
		"abc",		// Completely invalid string
		"",		   // Empty string
		"-.",		 // Malformed number
		"a",
		"234f",
	};

int main()
{
	int arrayLength = sizeof(testArray) / sizeof(testArray[0]);

	for (int i = 0; i < arrayLength; i++)
	{
		ScalarConverter::convert(testArray[i]);
		std::cout << std::endl;
	}
}
