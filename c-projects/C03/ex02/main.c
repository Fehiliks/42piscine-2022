/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 23:31:44 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/05 02:05:49 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char	*dest, char	*src);

int	main(void)
{
	char	dongie1[16] = "This";
	char	slorp1[] = "is cool";

	printf("%s", strcat(dongie1, slorp1));
//	printf("%s", ft_strcat(dongie1, slorp1));
}
