/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 09:53:12 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/13 21:26:03 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	length(int nbr)
{
	int	taille;

	taille = 1;
	while (nbr / 10 != 0)
	{
		nbr = nbr / 10;
		taille = taille * 10;
	}
	return (taille);
}

void	ft_putnbr(int nbr)
{
	int	nombre;

	nombre = length(nbr);
	if (nbr < 0 && nbr != -2147483648)
	{
		nbr = nbr * -1;
		write(1, "-", 1);
	}
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	if (nbr == 2147483647)
		write(1, "2147483647", 10);
	while (nbr != -2147483648 && nbr != 2147483647 && nombre != 0)
	{
		ft_putchar(nbr / nombre + '0');
		nbr = nbr % nombre;
		nombre = nombre / 10;
	}
}
