/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:10:34 by zbentalh          #+#    #+#             */
/*   Updated: 2023/08/04 12:05:11 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> 
#include<unistd.h>   

int main(int ac,char **ag)
{
	std::string lfr;
	std::string rw;
	std::string str;
	std::string str2;
	std::ifstream myfile;
	std::ofstream myfile2;
	std::size_t found ;
	int i;
	std::string ee = ag[1];
	ee = ee+".replace";
	lfr = ag[2];
	rw = ag[3];
	myfile2.open (ee, std::ofstream::out);
	myfile.open (ag[1], std::ofstream::in);
	if(!myfile2 || !myfile)
   	{
       std::cout<<"Error in one of the files !!! " << std::endl;
       return 0;
   	}
	while (std::getline(myfile, str))
	{
		found = str.find(lfr);
		i = str.length();
		while (found!=std::string::npos)
		{
			if (found + rw.length() <= str.length())
			{
				str = str.substr(0,found) + rw + str.substr(found + lfr.length());
				str2 = str.substr(found + rw.length());
			}
			else 
			{	
				str = str.substr(0,found) + rw;
				str2 = "";
			}
			
			found = str2.find(lfr);
			if (found!=std::string::npos)
				found +=  i - str2.length();
		}
		if (found==std::string::npos)
			std::cout << str << std::endl;
	}
	myfile.close();
	myfile2.close();
}