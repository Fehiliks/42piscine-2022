/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:48:23 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/04 19:00:46 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include <stdio.h>
char	*ft_strcpy(char *dest, char *src);
/*
char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
*/
int	main(void)
{
	char	stringy[] = "henlo frens";
	printf("%s", ft_strcpy(stringy, "It worked!"));
}
