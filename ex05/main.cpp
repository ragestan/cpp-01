/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 00:12:28 by zbentalh          #+#    #+#             */
/*   Updated: 2023/09/27 02:47:59 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int	main(int c, char **v)
{
	if (c != 2)
	{
		std::cout << "PLEASE SET ONE LEVEL BETWEEN{DEBUG,INFO,WARNING,ERROR}" << std::endl;
		exit(1);
	}
	harl h;
	h.complain(v[1]);
}