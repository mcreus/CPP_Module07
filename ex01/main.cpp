/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:28:14 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/27 12:22:26 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T >
void	afficheElement(const T &element)
{
	std::cout << element << " ";
}

int	main()
{
	int	intTab[] = {1, 2, 3, 4, 5};
	double	doubleTab[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	char	charTab[] = {'a', 'b', 'c', 'd', 'e'};

    std::cout << "----------------------------------------------" << std::endl;
	std::cout << "---------------First test---------------------" << std::endl;
	std::cout << "----------------------------------------------" << std::endl;

	std::cout << "Tableau d'entiers : ";
    ::iter(intTab, 5, afficheElement<int>);
    std::cout << std::endl;

    std::cout << "----------------------------------------------" << std::endl;
	std::cout << "---------------Second test--------------------" << std::endl;
	std::cout << "----------------------------------------------" << std::endl;

    std::cout << "Tableau de doubles : ";
    ::iter(doubleTab, 5, afficheElement<double>);
    std::cout << std::endl;

    std::cout << "----------------------------------------------" << std::endl;
	std::cout << "---------------Third test---------------------" << std::endl;
	std::cout << "----------------------------------------------" << std::endl;

	std::cout << "Tableau de char : ";
    ::iter(charTab, 5, afficheElement<char>);
    std::cout << std::endl;
}