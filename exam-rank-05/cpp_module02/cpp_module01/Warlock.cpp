/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:16:26 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/09 11:49:54 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const & newName, std::string const & newTitle) : name(newName), title(newTitle)
{
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock(void)
{
	std::map<std::string, ASpell *>:: iterator it = SpellBook.begin();	
	std::map<std::string, ASpell *>:: iterator ite = SpellBook.end();	
	while(it != ite)
	{
		delete it->second;
		it++;
	}
	std::cout << name << ": My job here is done!\n";
}

std::string const & Warlock::getName(void) const
{
	return (this->name);
}

std::string const & Warlock::getTitle(void) const
{
	return (this->title);
}

void	Warlock::setTitle(std::string const & newTitle)
{
	this->title = newTitle;
}

void	Warlock::introduce(void) const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

void	Warlock::learnSpell(ASpell * spell)
{
	if (spell)
	{
		std::map<std::string, ASpell *>:: iterator it = SpellBook.find(spell->getName());
		if (it == SpellBook.end())
			SpellBook[spell->getName()] = spell->clone();
	}
}

void	Warlock::forgetSpell(std::string SpellName)
{
	std::map<std::string, ASpell *>:: iterator it = SpellBook.find(SpellName);
	if (it != SpellBook.end())
	{
		delete it->second;
		SpellBook.erase(it);
	}
}

void    Warlock::launchSpell(std::string SpellName, ATarget const & target)
{
	std::map<std::string, ASpell *>:: iterator it = SpellBook.find(SpellName);
        if (it != SpellBook.end())
	{
		it->second->launch(target);
	}
}

