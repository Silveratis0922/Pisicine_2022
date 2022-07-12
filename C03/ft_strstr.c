/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:02:23 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/27 12:31:28 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	w;

	w = 0;
	i = 0;
	j = 0;
	while (to_find[w])
		w++;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		if (to_find[j] != str[i])
			j = 0;
		if (to_find[j] == str[i])
			j++;
		if (j == w)
			return (str + i + 1 - w);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	digan[] = "Salut le soir";
	char	amel[] = "";

	printf("%s", ft_strstr(digan,amel));
	return (0);
}*/
