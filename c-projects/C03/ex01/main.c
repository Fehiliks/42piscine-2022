/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:42:30 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/01 22:08:59 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int n);

int	main(void)
{
	char	str1[] = "1";
	char	str2[] = "";

	printf("%d", strncmp(str1, str2, 1));
	printf("\n%d", ft_strncmp(str1, str2, 1));
}
