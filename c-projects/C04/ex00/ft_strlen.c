/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:45:17 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/04 19:31:20 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	ft_strlen(char	*str);

int	main(void)
{
	char	*slomb;

	slomb = "whadheck     ";
	printf("%d", ft_strlen(slomb));
}
*/
