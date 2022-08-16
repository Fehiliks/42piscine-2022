/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:19:25 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/05 02:07:33 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
{
	char *d;

	d = dest;
	while (*d)
		d++;
	while (*src)
		*d++ = *src++;
	*d = '\0';
	return (dest);
}
*/
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dongie1[16] = "This";
	char	slorp1[] = "is cool";

	printf("%s", strcat(dongie1, slorp1));
//	printf("%s", ft_strcat(dongie1, slorp1));
}
*/
