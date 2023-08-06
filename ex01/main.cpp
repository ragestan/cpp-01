/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:21:28 by zbentalh          #+#    #+#             */
/*   Updated: 2023/07/26 21:29:12 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int	main(void)
{
	Zombie *z = zombieHorde(5, "zombie");
	for (int i = 0; i < 5; i++)
		z[i].announce();
	z = zombieHorde(6, "zombie");
	delete [] z;
	return (0);
}