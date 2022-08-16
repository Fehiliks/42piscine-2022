/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 00:16:04 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/04 19:11:47 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_printable(char x)
{
	if (x >= 32 && x <= 126)
		return (1);
	return (0);
}

int	ft_str_is_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_printable(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	bibble[] = "ABCXYZa\n";
	printf("%d", ft_str_is_printable(bibble));
}
*/
