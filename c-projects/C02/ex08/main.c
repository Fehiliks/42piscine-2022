/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 00:34:31 by fgardine          #+#    #+#             */
/*   Updated: 2022/05/31 00:36:17 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char	*str);

int	main(void)
{
	char	bibble[] = "AaaWtfIsGoingOnLOL--00\n";
	printf("%s", ft_strlowcase(bibble));
}
