/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:11:07 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/04 18:45:21 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	divres;
	int	modres;

	divres = (*a / *b);
	modres = (*a % *b);
	*a = divres;
	*b = modres;
}
/*
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	first;
	int	second;
	int	*a;
	int	*b;

	first = 21;
	second = 4;
	a = &first;
	b = &second;
	ft_ultimate_div_mod(a, b);
	printf("%d", first);
	printf("%c", '\n');
	printf("%d", second);
}
*/
