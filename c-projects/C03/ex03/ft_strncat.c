/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 23:31:24 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/05 02:01:45 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[j] != '\0') && (j < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dongie[20] = {"This "};
	char	slorp[20] = {"is_cool"};

//	printf("%s", strncat(dongie, slorp, 5));
	printf("%s", ft_strncat(dongie, slorp, 3));
}
*/
