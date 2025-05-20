
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string _name);
        ~Zombie();
        void announce(void)const;
        void setName(const std::string name1);
        
};
    
    Zombie* newZombie(std::string name);
    void randomChump(std::string name);

# endif

// char *str;

// str = "coucou";

// str = strdup("coucou");

// Zombie gugyombie("bob");

// Zombie *zombie = new Zombie("bob");
// delete zombie;