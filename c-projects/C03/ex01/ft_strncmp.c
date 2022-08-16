/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:42:43 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/05 02:08:35 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (i < n))
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "22a";
	char	str2[] = "22z";

//	printf("%d", strncmp(str1, str2, 1));
	printf("%d", ft_strncmp(str1, str2, 1));
}
*/
