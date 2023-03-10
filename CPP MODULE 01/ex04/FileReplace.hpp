/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 01:04:36 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/02 03:12:42 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACE_HPP
#define FILEREPLACE_HPP
#include <fstream>
#include <string>
#include <iostream>
simo simo simo simo simo
class FileReplace
{
	private:
		std::string m_infile;
		std::string m_outfile;
		std::string m_search;
		std::string m_replace;
		
	public:
		FileReplace();
		FileReplace(std::string infile, std::string outfile, std::string search, std::string replace);
		~FileReplace();
		bool replace( void );
};
#endif