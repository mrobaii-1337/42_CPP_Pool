/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:33:08 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/02 02:42:05 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _raw;
		static const int _fractional;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits(int const _raw);	
		float toFloat( void ) const;
		int toInt( void ) const;
		bool operator>(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator+(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		Fixed& operator++( void );
		Fixed operator++(int);
		static const Fixed& min(const Fixed& n1, const Fixed& n2);
		static Fixed& min(Fixed& n1, Fixed& n2);
		static const Fixed& max(const Fixed& n1, const Fixed& n2);
		static Fixed& max(Fixed& n1, Fixed& n2);
};
std::ostream& operator<<(std::ostream& os, const Fixed& other);
#endif