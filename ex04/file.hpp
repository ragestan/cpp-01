/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:16:36 by zbentalh          #+#    #+#             */
/*   Updated: 2023/09/27 03:31:40 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream> 

class file {
    public:
        void replace(char **ag);
    private:
        std::string infile;
        std::string outfile;
        std::ifstream myfile;
	    std::ofstream myfile2;
        std::string str;
        std::string lfr;
        std::string rw;
        int i;
        int tmp;
};