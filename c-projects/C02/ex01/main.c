/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 21:02:33 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/04 19:03:09 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned int n);
/*
char	*ft_strncpy(char	*dest, char	*src, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
*/

int	main(void)
{
	char	stringy[6];

//	printf("%s", stringy);
	printf("\n%s", ft_strncpy(stringy, "abc", sizeof (stringy)));
	printf("\n%s", strncpy(stringy, "abc", 6));
//	printf("\n%s", stringy);
}
