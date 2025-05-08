/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:02:18 by lbento            #+#    #+#             */
/*   Updated: 2025/04/22 13:02:48 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int	main(void)
{
      int *nbr;
      int n;
       n =1;
     nbr = &n;
      ft_ft(nbr);
      printf("%i", *nbr);
   	return 0;
}
