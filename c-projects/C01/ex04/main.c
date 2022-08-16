/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:18:18 by fgardine          #+#    #+#             */
/*   Updated: 2022/05/26 18:27:21 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
