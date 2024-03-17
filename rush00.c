/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgoh <isgoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:43:03 by isgoh             #+#    #+#             */
/*   Updated: 2024/03/17 11:28:48 by isgoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int xWidth, int yHeight)
{
	int x =0;
	int y =1;

	while (!(y >= yHeight + 1))
	{
		x++;
		if (x >= xWidth + 1)
		{
			ft_putchar('\n');
			x = 1;
			y = y + 1;
		}
		if (y == 1 || y == yHeight)
		{
			if (x == 1 || x == xWidth)
			{
				ft_putchar('o');
			}
			else
			{
				ft_putchar('-');
			}
		}
		if (y >= 2 && y <= yHeight - 1)
		{
			if (x == 1 || x == xWidth)
			{
				ft_putchar('|');
			}
			else
			{
				ft_putchar(' ');
			}
		}
	}
}
