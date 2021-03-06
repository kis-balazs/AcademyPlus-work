/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkis <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 12:58:52 by bkis              #+#    #+#             */
/*   Updated: 2017/03/11 12:58:53 by bkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tabmax(int *t, int siz)
{
	int	max;

	max = 0;
	while (siz--)
		if (max < t[siz])
			max = t[siz];
	return (max);
}
