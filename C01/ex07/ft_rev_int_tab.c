/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:26:52 by lbento            #+#    #+#             */
/*   Updated: 2025/04/22 21:11:07 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	i = 0;
	while (i < size -1)
	{
	a = tab[size -1];
	tab[size -1] = tab[i];
	tab[i] = a;
	size--;
	i++;
	}
}
// int main ()
// {
//        int a;
//        int n;
//        int s[] = {1, 2, 3, 4, 5};
// 	a = 5;
// 	n = 0;
// 	ft_rev_int_tab(s, a);
// 	while (n < a)
//  	{
//  	printf ("%i", s[n]);
//  	n++;
//  	}
//  	return (0);
//  }