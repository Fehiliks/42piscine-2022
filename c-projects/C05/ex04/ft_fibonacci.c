/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:49:53 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/06 21:58:54 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (1);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%i\n", ft_fibonacci(7));
}
*/
