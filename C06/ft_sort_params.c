/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:56:48 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/28 21:43:56 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_putstr(char *sg)
{
	int	z;

	z = 0;
	while (sg[z])
	{
		write(1, &sg[z], 1);
		z++;
	}
}

int	ft_strcomp(char *str1, char *str2)
{
	int	l;
	int	m;

	l = 0;
	m = 0;
	while (str1[l] == str2[m])
	{
		if (str1[l] && str2[m] == '\0')
			return (0);
		l++;
		m++;
	}
	return (str1[l] - str2[m]);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcomp(argv[i], argv[i + 1]) > 0)
		{
			ft_swap(argv + i, argv + i + 1);
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i <= argc - 1)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
