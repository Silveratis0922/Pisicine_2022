/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative-power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:16:10 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/29 19:03:07 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	n = nb;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		nb = nb * n;
		i++;
	}
	return (nb);
}
/*
int main(void)
{
	printf("%d",ft_iterative_power(-4,6));
	return (0);
}*/
