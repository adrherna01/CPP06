/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:10:34 by adrherna          #+#    #+#             */
/*   Updated: 2024/12/12 14:52:23 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string testArray[] = {
		// Integer literals
		"0",		  // Zero
		"-42",		// Negative integer
		"2147483647", // Maximum 32-bit signed integer
		"-2147483648",// Minimum 32-bit signed integer

		// Float literals
		"0.0f",	   // Zero as float
		"-4.2f",	  // Negative float
		"4.2f",	   // Positive float
		"-inff",	  // Negative infinity (float pseudo-literal)
		"+inff",	  // Positive infinity (float pseudo-literal)
		"nanf",	   // Not-a-Number (float pseudo-literal)

		// Double literals
		"0.0",		// Zero as double
		"-4.2",	   // Negative double
		"-inf",	   // Negative infinity (double pseudo-literal)
		"+inf",	   // Positive infinity (double pseudo-literal)
		"nan",		// Not-a-Number (double pseudo-literal)

		// Miscellaneous invalid inputs
		"abc",		// Completely invalid string
		"",		   // Empty string
		"123abc",	 // Partially invalid string
		"4.2.1",	  // Malformed number
		"-.",		 // Malformed number
		"+infabc",	// Malformed pseudo-literal
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