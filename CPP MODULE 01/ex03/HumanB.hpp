/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:02:07 by lucifer           #+#    #+#             */
/*   Updated: 2023/02/09 01:57:26 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *WeaponB;
	public:
		void attack( void );
		HumanB();
		HumanB(std::string newName);
		void setWeapon(Weapon &newWeapon);

};

#endif