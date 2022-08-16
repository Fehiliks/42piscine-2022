/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:34:52 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/04 19:10:18 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_uppercase(char x)
{
	if (x >= 65 && x <= 90)
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_uppercase(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	bibble[] = "ABCXYZa";
	printf("%d", ft_str_is_uppercase(bibble));
}
*/
