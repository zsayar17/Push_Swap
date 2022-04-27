/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 02:16:39 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/25 02:16:39 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	pushswap(t_list **a, t_list **b, int argc, int *counter)
{
	checklist(*a);
	minimize(a);
	if (checksort(*a))
		return ;
	if (argc <= 3)
		lessthan3(a, counter);
	else if (argc <= 5)
		wheels(a, b, counter);
	else if (argc < 200)
		packet(a, b, counter);
	else
		radix(a, b, counter);
}
