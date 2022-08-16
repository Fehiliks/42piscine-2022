/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 23:43:10 by fgardine          #+#    #+#             */
/*   Updated: 2022/06/01 23:54:49 by fgardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char	*dest, char	*src, unsigned int nb);

int	main(void)
{
//	char	dongie[11] = "This";
	char	dongie1[10] = "This";
//	char	slorp[] = "is_cool";
	char	slorp1[] = "is";

//	printf("%s", strncat(dongie, slorp, 7));
	printf("\n%s", ft_strncat(dongie1, slorp1, 5));
}
