/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:09:15 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/09 11:49:40 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock
{
	public:

		Warlock(std::string const & newName, std::string const & newTitle);
		~Warlock(void);

		std::string const & getName(void) const;
		std::string const & getTitle(void) const;

		void	setTitle(std::string const & newTitle);
		void	introduce(void) const;
		void	learnSpell(ASpell * spell);
		void	forgetSpell(std::string SpellName);
		void	launchSpell(std::string SpellName, ATarget const & target);

	protected:


	private:

		Warlock(void);
		Warlock(Warlock const & obj);
		Warlock & operator=(Warlock const & rhs);
		std::string		name;
		std::string		title;
		std::map<std::string, ASpell *> SpellBook;

};

