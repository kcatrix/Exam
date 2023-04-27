/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:16:26 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/09 11:49:54 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(void){}

ASpell::ASpell(std::string const & newName, std::string const & newEffects)
{
	this->name = newName;
	this->effects = newEffects;
}

ASpell::ASpell(ASpell const & obj)
{
	this->name = obj.name;
	this->effects = obj.effects;
}

ASpell & ASpell::operator =(ASpell const & rhs)
{
	this->name = rhs.name;
        this->effects = rhs.effects;
	return (*this);
}

ASpell::~ASpell(void)
{
}



std::string const & ASpell::getName(void) const
{
	return (this->name);
}

std::string const & ASpell::getEffects(void) const
{
	return (this->effects);
}

void ASpell::launch(ATarget const & target)
{
	target.getHitBySpell(*this);
}
