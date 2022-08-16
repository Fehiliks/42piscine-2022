/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 22:09:57 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/05 01:34:06 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	signflip;

	i = 0;
	num = 0;
	signflip = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			signflip *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += (str[i] - '0');
		i++;
	}
	num *= signflip;
	return (num);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("%s", "give one launch paramater");
		return (0);
	}
	printf("%d", ft_atoi(argv[1]));
}
*/
