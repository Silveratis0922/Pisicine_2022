/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:36:37 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/21 19:33:11 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	need_place(int i, int j, int k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i < '8')
	{
		j = i + 1;
		while (j < '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				need_place(i, j, k);
				if (!(i == '7'))
					write (1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}
/*
int	main()
{
	ft_print_comb();
	return (0);
}*/
