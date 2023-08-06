/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:50:25 by zbentalh          #+#    #+#             */
/*   Updated: 2023/07/28 14:53:52 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *weapon;
		std::string name;
	public:
		HumanB(std::string str);
		~HumanB();
		void attack();
		void setWeapon(Weapon &w);
};

#endif