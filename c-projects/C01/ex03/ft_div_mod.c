/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:55:17 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/04 18:43:34 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int	*div, int	*mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
#include <stdio.h>

void	ft_div_mod(int a, int b, int	*div, int	*mod);

int	main(void)
{
	int	inp1;
	int	inp2;
	int	divres;
	int	modres;
	int	*divptr;
	int	*modptr;

	inp1 = 21;
	inp2 = 4;
	divptr = &divres;
	modptr = &modres;
	ft_div_mod(inp1, inp2, divptr, modptr);
	printf("%d", inp1);
	printf("%c", '\n');
	printf("%d", inp2);
	printf("%c", '\n');
	printf("%d", divres);
	printf("%c", '\n');
	printf("%d", modres);
}
*/
