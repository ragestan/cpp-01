/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 02:43:15 by zbentalh          #+#    #+#             */
/*   Updated: 2023/09/26 23:54:36 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void harl::debug(void)
{
    std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void harl::info(void)
{
    std::cout <<"I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" <<std::endl;
}

void harl::warning(void)
{
    std::cout<<"I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." <<std::endl;
}

void harl::error(void)
{
    std::cout<< "This is unacceptable! I want to speak to the manager now." <<std::endl;
}

void harl::complain( std::string level )
{
    int i = 0;
    void (harl::*functptr[4])() = {&harl::debug,&harl::info,&harl::warning,&harl::error };
    std::string str[4];
	str[0] = "DEBUG";
	str[1] = "INFO";
	str[2] = "WARNING";
	str[3] = "ERROR";
    while(i<4)
    {
        if (level == str[i])
        {
            (this->*functptr[i])();
            return;
        }
        i++;
    }
}