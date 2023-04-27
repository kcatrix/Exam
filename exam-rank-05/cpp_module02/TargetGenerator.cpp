/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellGene.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:16:26 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/09 11:49:54 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void){}

TargetGenerator::~TargetGenerator(void)
{
	std::map<std::string, ATarget *>:: iterator it = SpellGene.begin();	
	std::map<std::string, ATarget *>:: iterator ite = SpellGene.end();	
	while(it != ite)
	{
		delete it->second;
		it++;
	}
	this->SpellGene.clear();
}


void	TargetGenerator::learnTargetType(ATarget * target)
{
	if (target)
	{
		std::map<std::string, ATarget *>:: iterator it = SpellGene.find(target->getType());
		if (it == SpellGene.end())
			SpellGene[target->getType()] = target->clone();
	}
}

void	TargetGenerator::forgetTargetType(std::string const & targetName)
{
	std::map<std::string, ATarget *>:: iterator it = SpellGene.find(targetName);
	if (it != SpellGene.end())
	{
		delete it->second;
		SpellGene.erase(it);
	}
}

ATarget * TargetGenerator::createTarget(std::string const & targetName)
{
	std::map<std::string, ATarget *>:: iterator it = SpellGene.find(targetName);
        if (it != SpellGene.end())
	{
		return (it->second->clone());
	}
	return (NULL);
}

