/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                        :+:      :+:    :+:   */
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

class Polymorph : public ASpell
{
	public:
		Polymorph(void);
		~Polymorph(void);
		Polymorph * clone(void);
	

};
