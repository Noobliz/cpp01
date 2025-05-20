#include "Zombie.hpp"

// void Zombie::setName(const std::string name1){
//     name = name1;
// }

Zombie* newZombie(std::string name){
    Zombie *zomb;
    zomb = new Zombie(name);
   // zomb->setName(name);

    return (zomb);
}


int main()
{
    Zombie *zomb;
    zomb = newZombie("Jack");
    zomb->announce();
    randomChump("Georges");
    Zombie z1("Graouuu");
    {
        Zombie z2("Bonjour");
        z1.announce();
        z2.announce();
    }
    delete zomb;
    std::cout<<"hello"<<std::endl;
    return 0;
}