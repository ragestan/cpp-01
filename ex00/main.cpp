/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:38:50 by zbentalh          #+#    #+#             */
/*   Updated: 2023/09/20 21:19:35 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *z = newZombie("zombie");
	z->announce();
	z = newZombie("zom2");
	z->announce();
	delete z;
	randomChump("random");
	randomChump("random2");
	return (0);
}