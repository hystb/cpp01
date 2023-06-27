/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmilan <nmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 12:10:37 by nmilan            #+#    #+#             */
/*   Updated: 2023/06/27 15:55:14 by nmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <istream>
#include <fstream>

void	ft_sed(char **argv)
{
	std::string exp1 = argv[2];
	std::string exp2 = argv[3];
	int			lenght = 0;
	char		*buffer;

	std::ifstream is(argv[1], std::ifstream::binary);
	if(is)
	{
		is.seekg(0, is.end);
		lenght = is.tellg();
		is.seekg(0, is.beg);
	}
	buffer = new char [lenght];
	is.read(buffer, lenght);
	is.close();
	std::cout << buffer << std::endl;
	
	delete [] buffer;
		
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		ft_sed(argv);
	else
		std::cout << "Error" << std::endl << "Please entre as following <fileName> <expressionA> <expressionB>";
}
