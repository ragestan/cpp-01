/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:41:31 by zbentalh          #+#    #+#             */
/*   Updated: 2023/07/27 20:27:30 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;
	
	std::cout << &str << std::endl;
	std::cout << ptr << std::endl;
	std::cout << &ref << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	std::cout << str << std::endl;
	return (0);
}