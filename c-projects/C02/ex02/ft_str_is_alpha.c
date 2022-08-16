/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:01:13 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/04 19:06:09 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphabet(char x)
{
	if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_alphabet(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	magicspace[] = "";

	printf("%d", ft_str_is_alpha(magicspace));
}
*/
