/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:28:15 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/04 18:38:17 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*nbr;
	int	number;

	nbr = &number;
	ft_ft(nbr);
	printf("%d", number);
}
/*
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*nbr;
	int	number;

	nbr = &number;
	ft_ft(nbr);
	printf("%d", number);
}
*/
