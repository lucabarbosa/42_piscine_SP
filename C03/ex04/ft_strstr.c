/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:09:24 by lbento            #+#    #+#             */
/*   Updated: 2025/05/03 17:57:55 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] != '\0'
			&& to_find[j] == str[i + j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
	i++;
	}
	return (0);
}
//#include <string.h>
//#include <stdio.h>
//int main ()
//{
//char s[] = "asas";
//char ss[] = "";
//char *str;
//str = ft_strstr(s, ss);
//str = strstr(s,ss);
//printf("%s\n", str);
//return 0;
//}
