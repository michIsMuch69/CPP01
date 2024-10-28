/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:08:20 by jedusser          #+#    #+#             */
/*   Updated: 2024/10/28 09:37:07 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie()
{}

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

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    int i;
    Zombie *horde;
    
    horde = new Zombie[N];
    i = 0;
    while (i < N )
    {
        horde[i] =  Zombie(name);
        i++;
    }
//    TEST
    i = 0;
    while(i < N)
    {
        horde[i].announce();
        i++;
    }
  //  TEST
    return (horde);
}

int main()
{
    std::string name;
    int N;
    
    std::cout << "Enter a name :" << std::endl;
    std::cin >> name;
    std::cout << "Enter nb of zombies for the horde :" << std::endl;
    std::cin >> N;
    Zombie *horde = Zombie::zombieHorde(N, name);
    delete [] horde;
    return(0);
}
