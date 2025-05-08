/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:43:27 by wsilveir          #+#    #+#             */
/*   Updated: 2025/04/20 19:19:41 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int l, int c, int size_x, int size_y)
{
	if ((l == 1 && c == 1) || (l == 1 && c == size_x))
	{
		ft_putchar('A');
	}
	else if ((l == size_y && c == 1)
		|| (l == size_y && c == size_x))
	{
		ft_putchar('C');
	}
	else if (c == 1 || l == 1 || l == size_y || c == size_x)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	column = 1;
	if (x <= 0 || y <= 0)
	{
		write(2, "error: invalid argument", 23);
		return ;
	}
	while (line <= y)
	{
		while (column <= x)
		{
			ft_print(line, column, x, y);
			column++;
		}
		ft_putchar('\n');
		column = 1;
		line++;
	}
}
