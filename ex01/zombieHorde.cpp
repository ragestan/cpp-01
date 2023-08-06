/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:24:35 by zbentalh          #+#    #+#             */
/*   Updated: 2023/07/26 21:26:35 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*z;

	z = new Zombie[N];
	for (int i = 0; i < N; i++)
		z[i].set_name(name);
	return (z);
}