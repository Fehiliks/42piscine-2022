/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:22:50 by fgardine          #+#    #+#             */
/*   Updated: 2022/05/26 17:53:55 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
void	ft_swap(int *a, int *b)
{
	int	newA;
	int	newB;

	newA = *b;
	newB = *a;
	*a = newA;
	*b = newB;
}
*/
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
