/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:22:26 by zbentalh          #+#    #+#             */
/*   Updated: 2023/07/26 21:25:49 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
#define	ZOMBIE_CLASS_H
#include <string>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <set>

class Zombie {
	public:
		Zombie( void );
		Zombie( std::string _name );
		~Zombie( void );
		void announce( void );
		void set_name(std::string _name);
	private:
		std::string name;		
};

Zombie	*zombieHorde(int N, std::string name);

#endif