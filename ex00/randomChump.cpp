/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:18:48 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/28 10:22:21 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void Zombie::randomChump(std::string name)
{
    Zombie *zombieFactory = Zombie::newZombie(name);
    zombieFactory->announce();
    delete zombieFactory;
}