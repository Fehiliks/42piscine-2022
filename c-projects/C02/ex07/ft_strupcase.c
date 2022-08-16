/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 00:20:55 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/04 19:12:50 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lowercase(char x)
{
	if (x >= 97 && x <= 122)
		return (1);
	return (0);
}

char	*ft_strupcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_lowercase(str[i]) == 1)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	bibble[] = "abcdefghijklmnopqrstuvwxyz--00\n";
	printf("%s", ft_strupcase(bibble));
}
*/
