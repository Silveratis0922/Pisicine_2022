/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 10:16:48 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/27 12:32:04 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] == s2[j])
	{
		if ((s1[i] && s2[j]) == '\0')
			return (0);
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}
/*
int	main()
{
	char *str1 = "bonzour !";
	char *str2 = "Bonaour !";
	printf("%d", ft_strcmp(str1, str2));
	return (0);
}*/
