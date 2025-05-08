/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smolinas <smolinas@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:46:44 by smolinas          #+#    #+#             */
/*   Updated: 2025/04/27 22:13:33 by smolinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_row_matrice_int(int **rules, int row, int *matrice_int)
{
	int	visible_left;
	int	visible_right;
	int	max_left;
	int	max_right;
	int	filled;
	int	j;

	visible_left = 0;
	visible_right = 0;
	max_left = 0;
	max_right = 0;
	filled = 1;
	j = 0;
	while (j < 4)
	{	
		if (rules[row][j] == 0)
			filled = 0;
	j++;
	}
	if (!filled)
		return (1); 
	j = 0;
	while (j < 4)
	{
		if (rules[row][j] > max_left)
		{
			max_left = rules[row][j];
			visible_left++;
		}
	j++;
	}
	j = 3;
	while (j >= 0)
	{
		if (rules[row][j] > max_right)
		{
			max_right = rules[row][j];
			visible_right++;
		}
	j--;
	}
	return (matrice_int[row + 8] == visible_left && matrice_int[row + 12]
		         == visible_right);
}

int	ft_check_col_matrice_int(int **rules, int col, int *matrice_int)
{
	int	visible_top;
	int	visible_bottom;
	int	max_top;
	int	max_bottom;
	int	filled;
	int	i;

	visible_top = 0;
	visible_bottom = 0;
	max_top = 0;
	max_bottom = 0;
	filled = 1;	
	i = 0;
	while (i < 4)
	{
		if (rules[i][col] == 0)
			filled = 0;
	i++;
	}
	if (!filled)
		return (1);
	i = 0;
	while (i < 4)
	{
		if (rules[i][col] > max_top)
		{
			max_top = rules[i][col];
			visible_top++;
		}
	i++;
	}
	i = 3;
	while (i >= 0)
	{
		if (rules[i][col] > max_bottom)
		{
			max_bottom = rules[i][col];
			visible_bottom++;
		}
	i--;
	}
	return (matrice_int[col] == visible_top
		&& matrice_int[col + 4] == visible_bottom);
}
