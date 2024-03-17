/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgoh <isgoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:59:30 by isgoh             #+#    #+#             */
/*   Updated: 2024/03/17 11:33:35 by isgoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int xWidth, int yHeight)
{
	int x = 0;
	int y = 1;
	while (!(y >= yHeight + 1));
	{
		xCount++;
		if (x >= xWidth + 1)
		{
			ft_putchar('\n');
			x = 1;
			y = y + 1;
		}
		if (y == 1)
		{
			if (x == 1)
			{
				ft_putchar('A');
			}
			else if (x == xWidth)
			{
				ft_putchar('C');
			}
			else
			{
				ft_putchar('B');
			}
		}
		else if (y == yHeight)
		{
			if (x == 1)
			{
				ft_putchar('C');
			}
			else if (x == xWidth)
			{
				ft_putchar('A');
			}
			else
			{
				ft_putchar('B');
			}
		}
		else if (y >= 2 && y <= yHeight - 1)
		{
			if (x == 1 || x == xWidth)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
		}
	}
}
