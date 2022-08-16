/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hquach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:08:07 by hquach            #+#    #+#             */
/*   Updated: 2022/06/01 14:35:41 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void print(int arr[4][4])
{
	int i;
	int	j;

	i = 0;
	while(i < 4)
	{
		j = 0;
		while(j<4)
		{
			printf("%d", arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

int up(int grid[4][4], int row, int col, int clue)
{
	int x;
	int count;
	int temp;

	if (row != 3)
		return (1);
	x = 0;
	count = 1;
	temp = grid[0][col];
	if (temp == 0)
		return (1);
	while (x < row)
	{
		if (grid[x+1][col] == 0)
			return (1);
		if (temp < grid[x+1][col])
		{
			temp = grid [x+1][col];
			count++;
		}
		x++;
	}
	return (count == clue);
}

int down(int grid[4][4], int row, int col, int	clue)
{
	int x;
	int count;
	int temp;

	if (row != 3)
		return (1);
	x = row;
	count = 1;
	temp = grid[row][col];
	if (temp == 0)
		return (1);
	while (x > 0)
	{
		if (grid[x-1][col] == 0)
			return (1);
		if (temp < grid[x-1][col])
		{
			temp = grid [x-1][col];
			count++;
		}
		x--;
	}
	return (count == clue);
}

int right(int grid[4][4], int row, int col, int	clue)
{
	int x;
	int count;
	int temp;

	if (col != 3)
		return(1);
	x = col;
	count = 1;
	temp = grid[row][x];
	if (temp == 0)
		return (1);
	while (x >= 0)
	{
		if (grid[row][x-1] == 0)
			return(1);
		if (temp < grid[row][x-1])
		{
			temp = grid [row][x-1];
			count++;
		}
		x--;
	}
	return (count == clue);
}

int left(int grid[4][4], int row, int col, int	clue)
{
	int x;
	int count;
	int temp;
	
	if (col != 3)
		return (1);
	x = 0;
	count = 1;
	temp = grid[row][x];
	if (temp == 0)
		return (1);
	while (x <= col)
	{
		if (grid[row][x+1] == 0)
			return (1);
		if (temp < grid[row][x+1])
		{
			temp = grid [row][x+1];
			count++;
		}
		x++;
	}
	return (count == clue);
}

int isSafe(int grid[4][4], int input[16], int row, int col, int num)
{
	int	x;
	
	x = 0;
	while(x <= 3)
	{
		if (grid[row][x] == num)
			return (0);
		x++;
	}
	x = 0;
	while(x <=3)
	{
		if (grid[x][col] == num)
			return (0);
		x++;
	} 
	return (1);
}

int clues(int grid[4][4], int input[16], int row, int col)
{
/*
	if (!left(grid, 0, col, input[8]))
		return (0);
	if (!left(grid, 1, col, input[9]))
		return (0);
	if (!left(grid, 2, col, input[10]))
		return (0);
	if (!left(grid, 3, col, input[11]))
		return (0);*/
	if (!right(grid, 0, col, input[12]))
		return (0);
	if (!right(grid, 1, col, input[13]))
		return (0);
	if (!right(grid, 2, col, input[14]))
		return (0);
	if (!right(grid, 3, col, input[15]))
		return (0);
	if (!left(grid, 0, col, input[8]))
		return (0);
	if (!left(grid, 1, col, input[9]))
		return (0);
	if (!left(grid, 2, col, input[10]))
		return (0);
	if (!left(grid, 3, col, input[11]))
		return (0);
	if (!up(grid, row, 0, input[0]))
		return (0);
	if (!up(grid, row, 1, input[1]))
		return (0);
	if (!up(grid, row, 2, input[2]))
		return (0);
	if (!up(grid, row, 3, input[3]))
		return (0);
	if (!down(grid, row, 0, input[4]))
		return (0);
	if (!down(grid, row, 1, input[5]))
		return (0);
	if (!down(grid, row, 2, input[6]))
		return (0);
	if (!down(grid, row, 3, input[7]))
		return (0);

	return (1);

}

int solve(int grid[4][4], int input[16], int row, int col)
{
	int	num;
	int backtrack;

	if (row == 3 && col == 4)
	{
		return (1);
	}
	if (col == 4)
	{
		row++;
		col = 0;
	}
	num = 1;
	while (num <= 4)
	{
		backtrack = grid[row][col];
		if (isSafe(grid, input, row, col, num) == 1)
		{
			grid[row][col] = num;
			if (clues(grid, input, row, col))
			{
				if (solve(grid, input, row, col + 1) == 1)
					return (1);
			}
		}
		grid[row][col] = backtrack;
		num++;
	}
	return (0);
}

/*void	launchstringarray(int argc, char *str)
{
	int	j;
	int	i;
	
}*/

int main()
{	

	int grid[4][4] = { {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
	int input[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};

	if (solve (grid, input, 0, 0) == 1)
		print(grid);
	else
	{
		write(1, "Error\n", 6);
		print(grid);
	}
	return (0);
}
