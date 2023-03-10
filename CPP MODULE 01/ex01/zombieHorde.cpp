/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifer <lucifer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:45:14 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/08 16:13:01 by lucifer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *Zombies;

	Zombies = new Zombie[N];
	
	for(int i = 0; i < N; i++)
		Zombies[i].setName(name);
	return (Zombies);
}