/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:33:56 by fgardine          #+#    #+#             */
/*   Updated: 2022/05/30 23:36:30 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char	*str);

int	main(void)
{
	char	bibble[] = "ABCXYZa";
	printf("%d", ft_str_is_uppercase(bibble));
}
