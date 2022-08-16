/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:06:33 by fgardine          #+#    #+#             */
/*   Updated: 2022/05/30 23:14:34 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char	*str);

int	main(void)
{
	char	maybe_numeric[] = "1590a";

	printf("%d", ft_str_is_numeric(maybe_numeric));
}
