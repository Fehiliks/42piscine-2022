/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:36:29 by fgardine          #+#    #+#             */
/*   Updated: 2022/05/21 17:37:54 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char something);

/*
 * 
 */
int	is_corner(int col, int row, int x, int y)
{
	if ((col == 0 && row == 0)
		|| (col == x - 1 && row == 0)
		|| (col == 0 && row == y - 1)
		|| (col == x - 1 && row == y - 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_top_or_bottom(int col, int row, int x, int y)
{
	if ((row == 0 || row == y - 1)
		&& is_corner(col, row, x, y) == 0)
	{
		return (1);
	}
	return (0);
}

int	is_left_or_right(int col, int row, int x, int y)
{
	if ((col == 0 || col == x - 1)
		&& is_corner(col, row, x, y) == 0)
	{
		return (1);
	}
	return (0);
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (row < y)
	{
		while (col < x)
		{
			if (is_corner(col, row, x, y) == 1)
				ft_putchar('o');
			else if (is_top_or_bottom(col, row, x, y) == 1)
				ft_putchar('-');
			else if (is_left_or_right(col, row, x, y) == 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		row++;
		col = 0;
		ft_putchar('\n');
	}
}
