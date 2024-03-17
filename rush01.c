/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgoh <isgoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:55:26 by isgoh             #+#    #+#             */
/*   Updated: 2024/03/16 15:21:38 by isgoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int xWidth, int yHeight)
{
	int xCount = 0;
	int yCount = 1;
	while (!(yCount >= yHeight + 1))
	{
		xCount++;
		if (xCount >= xWidth + 1)
		{
			ft_putchar('\n');
			xCount = 1;
			yCount = yCount + 1;
		}
		if (yCount == 1)
		{
			if (xCount == 1)
			{
				ft_putchar('/');
			}
			else if (xCount == xWidth)
			{
				ft_putchar('\\');
			}
			else
			{
				ft_putchar('*');
			}
		}
		if (yCount >= 2 && yCount <= yHeight - 1)
		{
			if (xCount == 1 || xCount == xWidth)
			{
				ft_putchar('*');
			}
			else
			{
				ft_putchar(' ');
			}
		}
		if (yCount == yHeight)
		{
			if (xCount == 1)
			{
				ft_putchar('\\');
			}
			else if (xCount == xWidth)
			{
				ft_putchar('/');
			}
			else
			{
				ft_putchar('*');
			}
		}
	}
}
