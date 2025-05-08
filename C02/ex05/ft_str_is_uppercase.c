/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:07:41 by lbento            #+#    #+#             */
/*   Updated: 2025/04/24 13:07:44 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
//int main ()
//{
//	char s[] = {"TESTE"};
//	char s1[] = {"TEsTE"};
//	char s2[] = {"TEST!"};
//	char s3[] = {"TÉSTE"};
//	int result;
//	ft_str_is_uppercase(s);
//	result = ft_str_is_uppercase(s);
//	printf("%i\n", result);
//	ft_str_is_uppercase(s1);
//	result = ft_str_is_uppercase(s1);
//	printf("%i\n", result);
//	ft_str_is_uppercase(s2);
//	result = ft_str_is_uppercase(s2);
//	printf("%i\n", result);
//	ft_str_is_uppercase(s3);
//	result = ft_str_is_uppercase(s3);
//	printf("%i\n", result);
//}
