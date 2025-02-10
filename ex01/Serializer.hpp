/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:06:29 by adrherna          #+#    #+#             */
/*   Updated: 2024/12/17 15:37:57 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sys/_types/_uintptr_t.h>
#include <sys/types.h>

struct Data {
	int id;
	std::string name;
	double value;
};
class Serializer {
	private:
		Serializer();
		~Serializer();
		Serializer(const Serializer& s);
		Serializer& operator=(const Serializer& s);

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
