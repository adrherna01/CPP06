/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:25:09 by adrherna          #+#    #+#             */
/*   Updated: 2024/12/12 13:56:27 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

// std::stoi (String to Integer)
// std::stol / std::stoll (String to Long / Long Long)
// std::stof (String to Float)
// std::stod (String to Double)

void	toInt(const std::string& literal);
void	toFloat(const std::string& literal);
void	toDouble(const std::string& literal);
void	toChar(const std::string& literal);

class ScalarConverter {
	public:
		static void convert(const std::string literal);
};