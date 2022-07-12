/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:50:31 by tchantro          #+#    #+#             */
/*   Updated: 2022/03/23 15:10:35 by tchantro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_upper_in_low(char *ul)
{
	int	i;

	i = 0;
	while (ul[i])
	{
		if (ul[i] >= 65 && ul[i] <= 90)
			ul[i] = ul[i] + 32;
		i++;
	}
	return (ul);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_upper_in_low(str);
	i = 0;
	while (str[i])
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		while ((str[i] >= 32 && str[i] <= 46) || (str[i] >= 58 && str[i] <= 64)
			|| (str[i] >= 91 && str[i] <= 96)
			|| (str[i] >= 123 && str[i] <= 126))
		{
			i++;
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
				i--;
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	lie[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(lie));
	return (0);
}*/
