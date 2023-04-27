/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spellBook.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:16:26 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/09 11:49:54 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(void){}

SpellBook::~SpellBook(void)
{
	std::map<std::string, ASpell *>:: iterator it = spellBook.begin();	
	std::map<std::string, ASpell *>:: iterator ite = spellBook.end();	
	while(it != ite)
	{
		delete it->second;
		it++;
	}
	this->spellBook.clear();
}


void	SpellBook::learnSpell(ASpell * spell)
{
	if (spell)
	{
		std::map<std::string, ASpell *>:: iterator it = spellBook.find(spell->getName());
		if (it == spellBook.end())
			spellBook[spell->getName()] = spell->clone();
	}
}

void	SpellBook::forgetSpell(std::string SpellName)
{
	std::map<std::string, ASpell *>:: iterator it = spellBook.find(SpellName);
	if (it != spellBook.end())
	{
		delete it->second;
		spellBook.erase(it);
	}
}

ASpell * SpellBook::createSpell(std::string SpellName)
{
	std::map<std::string, ASpell *>:: iterator it = spellBook.find(SpellName);
        if (it != spellBook.end())
	{
		return (it->second->clone());
	}
	return (NULL);
}

