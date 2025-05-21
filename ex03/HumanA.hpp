/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguiet <lguiet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:52:29 by lguiet            #+#    #+#             */
/*   Updated: 2025/05/21 16:23:04 by lguiet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA{
    private:
        Weapon &_weapon;
        std::string _name;
    public:
        HumanA(const std::string &name, Weapon &weapon);
        ~HumanA();
        void attack()const;
};

#endif