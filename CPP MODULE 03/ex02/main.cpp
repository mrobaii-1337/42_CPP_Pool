/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 07:55:30 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/08 01:32:19 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap P1("simo");
	P1.takeDamage(0);
	P1.attack("Youssef");
	P1.highFivesGuys();
}