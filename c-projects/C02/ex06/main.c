/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 00:14:50 by fgardine          #+#    #+#             */
/*   Updated: 2022/05/31 00:18:38 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char	*str);

int	main(void)
{
	char	bibble[] = "ABCXYZa\n";
	printf("%d", ft_str_is_printable(bibble));
}
