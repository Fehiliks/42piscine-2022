/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:17:16 by fgardine          #+#    #+#             */
/*   Updated: 2022/05/24 15:32:39 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char a)
{
	write(1, &a, 1);
}

void	ft_print3chars(char x, char y, char z)
{
	ft_printchar(x);
	ft_printchar(y);
	ft_printchar(z);
}

void	ft_wtfevenisthis(int dig2, int dig1, int dig0)
{	
	if (dig2 == 067 && dig1 == 070 && dig0 == 071)
	{
	}
	else
	{
		ft_printchar(',');
		ft_printchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	dig0ascii;
	int	dig1ascii;
	int	dig2ascii;

	dig0ascii = 060;
	dig1ascii = 060;
	dig2ascii = 060;
	while (dig2ascii <= 067)
	{
		while (dig1ascii <= 070)
		{
			while (dig0ascii <= 071)
			{
				ft_print3chars(dig2ascii, dig1ascii, dig0ascii);
				ft_wtfevenisthis(dig2ascii, dig1ascii, dig0ascii);
				dig0ascii++;
			}
			dig1ascii++;
			dig0ascii = 060;
		}
		dig2ascii++;
		dig1ascii = 060;
	}
}
