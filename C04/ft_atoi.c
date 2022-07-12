/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:51:44 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/27 12:38:25 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	a;
	int	neg;

	neg = 1;
	j = 0;
	a = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	if (j % 2 != 0)
		neg = neg * -1;
	while (str[i] >= 48 && str[i] <= 57)
		a = a * 10 + str[i++] - 48;
	return (a * neg);
}
/*
int	main(void)
{
	char	iot[] = "		-+-+-++67657fef73";
	printf("%d", ft_atoi(iot));
	return (0);
}*/
