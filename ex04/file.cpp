/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:22:19 by zbentalh          #+#    #+#             */
/*   Updated: 2023/09/27 03:31:17 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

void file::replace(char **ag)
{
    infile = ag[1];
    outfile = infile;
    lfr = ag[2];
    rw = ag[3];
    i = 0;
    outfile = outfile+".replace";
    myfile2.open (outfile, std::ofstream::out);
	myfile.open (infile, std::ofstream::in);
    if(!myfile2 || !myfile)
   	{
       std::cout<<"Error in one of the files !!! " << std::endl;
       return ;
   	}
    std::getline(myfile,str,'\0');
    while((str).find(lfr,i) != std::string::npos)
    {
        tmp = str.find(lfr,i);
         i = str.find(lfr,i) + rw.length();
        str.erase (tmp,lfr.length());
        str.insert(tmp,rw);
    }
    myfile2 <<str;
}