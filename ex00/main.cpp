/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:04:51 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/28 10:02:09 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(const std::string &name) : _name(name)
{}

Zombie::~Zombie(void)
{
    std::cout << "zombie [" << _name << "] destroyed" << std::endl;
}


void    Zombie::announce(void)
{
    std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie(std::string name)
{
    return new Zombie(name);
}

void Zombie::randomChump(std::string name)
{
    Zombie *zombieFactory = Zombie::newZombie(name);
    // newZombie(name);
    zombieFactory->announce();
    delete zombieFactory;
}

int main()
{
    Zombie *zombieFactory = NULL;
    std::string name;
    std::cout << "Enter a name" << std::endl;
    std::cin >> name;    
    zombieFactory->randomChump(name);
    return(0);
}