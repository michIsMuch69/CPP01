/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 07:44:09 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/28 11:15:43 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string &name) : _name(name)
{}

Zombie::~Zombie(void)
{
    std::cout << "Zombie [" << _name << "] destroyed" << std::endl;
}


void    Zombie::announce(void)
{
    std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}