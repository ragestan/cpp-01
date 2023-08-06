/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:46:12 by zbentalh          #+#    #+#             */
/*   Updated: 2023/07/28 14:46:59 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	type = str;
}
Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string str)
{
	type = str;
}
