/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:36:42 by adrherna          #+#    #+#             */
/*   Updated: 2024/12/17 15:38:30 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

int main() {
	Data dataInstance;
	dataInstance.id = 42;
	dataInstance.name = "Test Data";
	dataInstance.value = 3.14;

	std::cout << "Original Data object:" << std::endl;
	std::cout << "Address: " << &dataInstance << std::endl;
	std::cout << "id: " << dataInstance.id << std::endl;
	std::cout << "name: " << dataInstance.name << std::endl;
	std::cout << "value: " << dataInstance.value << std::endl;

	uintptr_t raw = Serializer::serialize(&dataInstance);
	std::cout << "\nSerialized uintptr_t value: " << raw << std::endl;

	Data* deserializedPtr = Serializer::deserialize(raw);

	std::cout << "\nDeserialized Data object:" << std::endl;
	std::cout << "Address: " << deserializedPtr << std::endl;
	std::cout << "id: " << deserializedPtr->id << std::endl;
	std::cout << "name: " << deserializedPtr->name << std::endl;
	std::cout << "value: " << deserializedPtr->value << std::endl;

	if (deserializedPtr == &dataInstance) {
		std::cout << "\nSerialization and deserialization successful!" << std::endl;
	} else {
		std::cout << "\nSerialization and deserialization failed!" << std::endl;
	}

	return 0;
}