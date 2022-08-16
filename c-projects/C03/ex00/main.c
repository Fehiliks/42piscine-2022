/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 00:51:52 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/01 21:39:44 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char	*s1, char	*s2);

int	main(void)
{
	char	str1[] = "";
	char	str2[] = "";

	printf("%d", strcmp(str1, str2));
	printf("\n%d", ft_strcmp(str1, str2));
}
