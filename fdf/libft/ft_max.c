/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkis <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 19:52:41 by bkis              #+#    #+#             */
/*   Updated: 2017/05/15 19:52:42 by bkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_max(int a[], int n)
{
	int i;
	int max;

	i = 0;
	max = a[0];
	while (i < n)
	{
		if (a[i] > max)
			max = a[i];
		i++;
	}
	return (max);
}
