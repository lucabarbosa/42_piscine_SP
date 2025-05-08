/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:02:37 by lbento            #+#    #+#             */
/*   Updated: 2025/04/22 15:02:41 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}
// int	main()
// {
// 	int nr1;
// 	int nr2;
// 	int *ptr1;
// 	int *ptr2;
// 	nr1 = 15;
// 	nr2 = 4;
// 	ptr1 = &nr1;
// 	ptr2 = &nr2;
// 	ft_ultimate_div_mod(ptr1, ptr2);
// 	printf("%d\n\n", nr1);
// 	printf("%d", nr2);
// }
