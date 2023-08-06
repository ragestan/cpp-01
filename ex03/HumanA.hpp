/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:47:26 by zbentalh          #+#    #+#             */
/*   Updated: 2023/07/28 14:53:55 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &weapon;
		std::string name;
	public:
		HumanA(std::string str,Weapon &w);
		~HumanA();
		void attack();
};

#endif