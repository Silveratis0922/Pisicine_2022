/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:00:48 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/24 11:36:49 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	lenght(int a)
{
	int	taille;

	taille = 1;
	while (a / 10 != 0)
	{
		a = a / 10;
		taille = taille * 10;
	}
	return (taille);
}

void	ft_putnbr(int nb)
{
	int	taille;

	taille = lenght(nb);
	if (nb < 0 && nb != -2147483648)
	{
		nb = (nb * -1);
		write(1, "-", 1);
	}
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	while ((nb >= 0) && (nb <= 2147483647) && (taille != 0))
	{
		ft_putchar(nb / taille + '0');
		nb = nb % taille;
		taille = taille / 10;
	}
}
/*
int	main()
{
	ft_putnbr(2147483);
	return (0);
}*/
