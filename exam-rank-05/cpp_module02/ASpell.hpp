/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:09:15 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/09 11:49:40 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	public:
		ASpell(void);
		ASpell(ASpell const & obj);
		ASpell(std::string const & newName, std::string const & newEffects);
		virtual ~ASpell(void);

		std::string const & getName(void) const;
		std::string const & getEffects(void) const;
		virtual ASpell * clone(void) = 0;
		ASpell & operator =(ASpell const & rhs);
		void	setEffects(std::string const & newEffects);
		void launch(ATarget const & target);

	protected:
		std::string		name;
		std::string		effects;

};
