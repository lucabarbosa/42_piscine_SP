/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:53:44 by lbento            #+#    #+#             */
/*   Updated: 2025/04/23 14:35:37 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{	
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		j++;
		}
	i++;
	}
}
// int main(void)
// {
// 	int a[] = {5, 3, 1, 6, 4, 2};
// 	int s;
// 	int n;
// 	s = 6;
// 	n = 0;
// 	ft_sort_int_tab (a, s);
// 	while (n < s)
// 	{
// 	printf ("%i", a[n]);
// 	n++;
// 	}
// 	return 0;
// }