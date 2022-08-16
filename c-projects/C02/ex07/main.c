/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 00:22:29 by fgardine          #+#    #+#             */
/*   Updated: 2022/05/31 00:32:01 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char	*str);

int	main(void)
{
	char	bibble[] = "abcdefghijklmnopqrstuvwxyz--00\n";
	printf("%s", ft_strupcase(bibble));
}
