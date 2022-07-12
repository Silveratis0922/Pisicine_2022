/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:49:09 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/16 11:04:28 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}	
}
/*
int	main()
{
	int	tab[] = {1,3,5,7,9};
	int	i;

	i = 0;
	ft_rev_int_tab(tab,5);
	while ( i < sizeof (tab) / sizeof (int))
	{
		printf("%d",tab[i]);
		i++;
	}
	return (0);
}*/
