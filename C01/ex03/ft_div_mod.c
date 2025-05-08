/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:39:30 by lbento            #+#    #+#             */
/*   Updated: 2025/04/22 15:27:44 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int	main()
{
	int nr1;
	int nr2;
	int *ptr1;
	int *ptr2;

	nr1 = 15;
	nr2 = 5;

	ptr1 = &nr1;
	ptr2 = &nr2;
	ft_div_mod(nr1, nr2, ptr1, ptr2);
//	------------------------------------------

	printf("%d\n\n", *ptr1);
	printf("%d", nr2);
}