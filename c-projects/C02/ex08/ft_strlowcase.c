/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 00:37:23 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/04 19:13:45 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_uppercase(char x)
{
	if (x >= 65 && x <= 90)
		return (1);
	return (0);
}

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_uppercase(str[i]) == 1)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	bibble[] = "AaaWtfIsGoingOnLOL--00\n";
	printf("%s", ft_strlowcase(bibble));
}
*/
