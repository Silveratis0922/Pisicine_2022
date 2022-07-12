/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:34:49 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/16 11:35:02 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	m;

	d = *a / *b;
	m = *a % *b;
	*a = d;
	*b = m;
}
/*
int	main()
{
	int a;
	int b;

	a = 25;
	b = 10;
	ft_ultimate_div_mod(&a,&b);
	printf("%d\n%d\n",a,b);
	return (0);

}*/
