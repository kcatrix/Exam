/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:16:26 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/09 11:49:54 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(void){}

ATarget::ATarget(std::string const & newType)
{
	this->type = newType;
}

ATarget::ATarget(ATarget const & obj)
{
	this->type = obj.type;
}

ATarget & ATarget::operator =(ATarget const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

ATarget::~ATarget(void)
{
}

std::string const & ATarget::getType(void) const
{
	return (this->type);
}

void ATarget::getHitBySpell(ASpell const & spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}

