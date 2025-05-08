/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:00:13 by smolinas          #+#    #+#             */
/*   Updated: 2025/04/27 22:00:20 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_parse_matrice_int(char *str)
{
	int	*matrice_int;
	int	i;
	int	j;

	matrice_int = malloc(4 * 16);
	if (!matrice_int)
		exit(0);
	i = 0;
	j = 0;
	while (str[i] && j < 16)
	{
		if (str[i] >= '1' && str[i] <= '4')
			matrice_int[j++] = str[i] - '0';
		i++;
	}
	return (matrice_int);
}
