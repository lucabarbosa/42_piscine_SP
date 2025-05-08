/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:50:38 by smolinas          #+#    #+#             */
/*   Updated: 2025/04/27 21:55:18 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_convert_char_to_num(int nb);

void	ft_print_rules(int **rules)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (j == 3)
			{
				ft_convert_char_to_num(rules[i][j]);
			}
			else
			{
				ft_convert_char_to_num(rules[i][j]);
				ft_putchar(' ');
			}
		j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_convert_char_to_num(int nb)
{
	ft_putchar(nb + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
