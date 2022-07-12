/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 19:08:32 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/23 10:42:43 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && 90)))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char blabla [] = "sfasoaorgepnaprgjn";

	printf("%d",ft_str_is_alpha(blabla));
	return (0);
}*/
