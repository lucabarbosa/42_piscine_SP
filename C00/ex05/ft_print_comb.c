/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:34:14 by lbento            #+#    #+#             */
/*   Updated: 2025/04/18 18:12:29 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	primeiro;
	char	segundo;
	char	terceiro;

	primeiro = '0';
	while (primeiro <= '9')
	{
	segundo = primeiro + 1;
		while (segundo <= '9')
		{
		terceiro = segundo + 1;
			while (terceiro <= '9')
			{
				write (1, &primeiro, 1);
				write (1, &segundo, 1);
				write (1, &terceiro, 1);
				if (!(primeiro == '7' && segundo == '8' && terceiro == '9'))
					write (1, ", ", 2);
			terceiro++;
			}
	segundo++;
		}
	primeiro++;
	}
}
int	main (void)
{
	ft_print_comb();
	return (0);
}
