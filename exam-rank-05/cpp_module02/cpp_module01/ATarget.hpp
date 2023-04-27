/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:09:15 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/09 11:49:40 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:
		ATarget(void);
		ATarget(ATarget const & obj);
		ATarget(std::string const & newType);
		virtual ~ATarget(void);

		std::string const & getType(void) const;
		void getHitBySpell(ASpell const & spell) const;
		virtual ATarget * clone(void) = 0;
		ATarget & operator =(ATarget const & rhs);

	protected:
		std::string		type;

};
