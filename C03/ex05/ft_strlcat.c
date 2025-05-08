/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:54:30 by lbento            #+#    #+#             */
/*   Updated: 2025/05/01 12:32:43 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total;

	i = 0;
	j = 0;
	total = 0;
	while (dest[i] != '\0')
		i++;
	while (src[total] != '\0')
		total++;
	if (size <= i)
	total = total + size;
	else
	total = total + i;
	while ((src[j] != '\0') && ((i + 1) < size))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (total);
}
//int main ()
//{
//char s[50] = {"Hello "};
//char ss[50] = {"World!"};
//int result;
//result = ft_strlcat(s, ss, 13);
//printf("%i\n", result);
//printf("%s\n", s);
//return 0;
//}
