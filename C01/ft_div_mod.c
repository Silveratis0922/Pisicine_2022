/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 21:25:31 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/16 11:33:37 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int a;
	int b;

	a = 25;
	b = 10;
	ft_div_mod(a,b,&a,&b);
	printf("%d\n%d\n",a,b);
	return (0);
}*/
