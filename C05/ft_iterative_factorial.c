/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:39:49 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/30 12:36:42 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = nb - 1;
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
/*
int main(void)
{
	printf("%d",ft_iterative_factorial(30));
	return (0);
}*/
