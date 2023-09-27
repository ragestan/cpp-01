/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:08:05 by zbentalh          #+#    #+#             */
/*   Updated: 2023/09/27 03:30:19 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

int main(int ac,char **ag)
{
    if ( ac != 4)
    {
      std::cout << "Error : the program takes three parameters" << std::endl;
        return (0);
    }
    file r;
    r.replace(ag);
}