/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:44:41 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/27 12:20:08 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main() 
{
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "---------------First test---------------------" << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	
	try
	{
		Array<int> emptyTab;
	
		Array<int> intTab(5);

		unsigned int i = 0;
		while (i < intTab.getSize()) 
		{
			intTab[i] = i * 10;
			i++;
		}

		Array<int> intTabCopy = intTab;
		intTabCopy[2] = 99;

		unsigned int j = 0;
		while (j < intTab.getSize()) 
		{
			std::cout << intTab[j] << " ";
			j++;
		}
		std::cout << std::endl;
		std::cout << emptyTab[j] << std::endl;

		unsigned int k = 0;
		while (k < intTabCopy.getSize()) 
		{
			std::cout << intTabCopy[k] << " ";
			k++;
		}
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "---------------Second test--------------------" << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	
	try
	{
		Array<int> emptyTab;
	
		Array<int> intTab(5);

		unsigned int i = 0;
		while (i < intTab.getSize()) 
		{
			intTab[i] = i * 10;
			i++;
		}

		Array<int> intTabCopy = intTab;
		intTabCopy[2] = 99;

		unsigned int j = 0;
		while (j < intTab.getSize()) 
		{
			std::cout << intTab[j] << " ";
			j++;
		}
		std::cout << std::endl;
		//On enleve l'affichage  du tableau vide
		//std::cout << emptyTab[j] << std::endl;

		unsigned int k = 0;
		while (k < intTabCopy.getSize()) 
		{
			std::cout << intTabCopy[k] << " ";
			k++;
		}
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

		return (0);
}
