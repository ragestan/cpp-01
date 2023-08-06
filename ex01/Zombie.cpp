/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:23:10 by zbentalh          #+#    #+#             */
/*   Updated: 2023/07/26 21:47:58 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string _name)
{
	name = _name;
}

void Zombie::set_name(std::string _name)
{
	name = _name;
}

Zombie::~Zombie(void)
{
	std::cout << name << " is dead!!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}