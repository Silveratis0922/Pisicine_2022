/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:38:30 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/29 18:42:31 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long long int	i;
	long long int	j;

	i = 0;
	j = 2;
	if (nb < 1)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (i <= nb)
		{
			i = j * j;
			if (i == nb)
				return (j);
			else
				j++;
		}
		return (0);
	}
}
/*
int	main()
{
	printf("%d",ft_sqrt(25));
	return (0);
}*/
