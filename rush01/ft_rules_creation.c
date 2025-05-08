/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_creation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:01:16 by smolinas          #+#    #+#             */
/*   Updated: 2025/04/27 22:03:56 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**ft_create_rules(void)
{
	int	**rules;
	int	i;
	int	j;

	rules = malloc (4 * 16);
	if (!rules)
	{
		free (rules);
		exit (0);
	}
	i = 0;
	while (i < 4)
	{
		rules[i] = malloc (4 * 16);
		if (!rules[i])
			exit (0);
		j = 0;
		while (j < 4)
		{
			rules[i][j] = 0;
			j++;
		}
			i++;
	}
	return (rules);
}

void	ft_free_memory(int **rules)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(rules[i]);
		i++;
	}
	free(rules);
}
