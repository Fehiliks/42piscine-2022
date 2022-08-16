/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 22:10:49 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/05 01:34:45 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

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
