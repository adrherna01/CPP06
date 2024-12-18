/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:25:09 by adrherna          #+#    #+#             */
/*   Updated: 2024/12/16 13:14:50 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include <iomanip>

void	toInt(const std::string& literal);
void	toFloat(const std::string& literal);
void	toDouble(const std::string& literal);
void	toChar(const std::string& literal);
bool	isValid(std::string& literal);

class ScalarConverter {
	private:
		ScalarConverter();
	public:
		static void convert(const std::string literal);
};