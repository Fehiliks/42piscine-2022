/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:10:39 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/04 19:09:04 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_numeric(char x)
{
	if (x >= 48 && x <= 57)
		return (1);
	return (0);
}

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_numeric(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	maybe_numeric[] = "1590a";

	printf("%d", ft_str_is_numeric(maybe_numeric));
}
*/
