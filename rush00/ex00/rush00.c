/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:43:27 by wsilveir          #+#    #+#             */
/*   Updated: 2025/04/20 18:59:27 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int l, int c, int size_x, int size_y)
{
	if ((l == 1 && c == 1) || (l == size_y && c == 1))
	{
		ft_putchar('o');
	}
	else if ((l == 1 && c == size_x)
		|| (l == size_y && c == size_x))
	{
		ft_putchar('o');
	}
	else if (l == 1 || l == size_y)
	{
		ft_putchar('-');
	}
	else if (c == 1 || c == size_x)
	{
		ft_putchar('|');
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
