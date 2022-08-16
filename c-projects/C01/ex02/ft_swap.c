/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:17:36 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/04 18:42:34 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int	*b)
{
	int	newb;
	int	newa;

	newa = *b;
	newb = *a;
	*a = newa;
	*b = newb;
}
/*
#include <stdio.h>

void	ft_swap(int	*a, int	*b);

int	main(void)
{
	int	aval;
	int	bval;
	int	*a;
	int	*b;

	aval = 7;
	bval = 17;
	a = &aval;
	b = &bval;
	ft_swap(a, b);
	printf("%d", aval);
	printf("%c", '\n');
	printf("%d", bval);
}
*/
