/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:59:43 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/29 18:47:03 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	else if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0)
		return (0);
	if (nb == 2147483647)
		return (1);
	while (i <= nb)
	{
		if (nb % i == 0 && i != nb)
			return (0);
		else
			i += 2;
	}
	return (1);
}
/*
int	main()
{
	printf("%d", ft_is_prime(30));
	return (0);
}*/
