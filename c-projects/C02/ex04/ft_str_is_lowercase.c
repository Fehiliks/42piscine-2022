/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:18:16 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/04 19:08:29 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lowercase(char x)
{
	if (x >= 97 && x <= 122)
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_lowercase(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	bibble[] = "Aabcxyz";
	printf("%d", ft_str_is_lowercase(bibble));
}
*/
