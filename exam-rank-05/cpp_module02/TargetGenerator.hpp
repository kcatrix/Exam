/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                        :+:      :+:    :+:   */
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

class TargetGenerator
{
	public:
		TargetGenerator(void);
		~TargetGenerator(void);

		void	learnTargetType(ATarget * target);
		void	forgetTargetType(std::string const & targetName);
		ATarget * createTarget(std::string const & targetName);

	private:

		TargetGenerator(TargetGenerator const & obj);
		TargetGenerator & operator=(TargetGenerator const & rhs);
		std::map<std::string, ATarget *> SpellGene;

};

