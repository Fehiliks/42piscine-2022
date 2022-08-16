/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:18:35 by fgardine          #+#    #+#             */
/*   Updated: 2022/05/30 23:24:25 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char	*str);

int	main(void)
{
	char	bibble[] = "Aabcxyz";
	printf("%d", ft_str_is_lowercase(bibble));
}
