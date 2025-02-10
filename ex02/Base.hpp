/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:20:23 by adrherna          #+#    #+#             */
/*   Updated: 2024/12/17 16:41:14 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

#include <random>
class A;
class B;
class C;

class Base {
	public:
		virtual ~Base() = default;
};
		Base* generate();
		void identify(Base* p);
		void identify(Base& p);

#endif
