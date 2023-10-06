/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:52:00 by zbentalh          #+#    #+#             */
/*   Updated: 2023/10/04 01:03:38 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	weapon=NULL;
}
HumanB::HumanB(std::string str)
{
	weapon =NULL;
	name = str;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}

void HumanB::attack()
{
	if(weapon==NULL)
	{
		std::cout<<name<< " Has no weapon"<<std::endl;
	}
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
