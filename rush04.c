/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrush04.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgoh <isgoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:59:30 by isgoh             #+#    #+#             */
/*   Updated: 2024/03/17 15:03:08 by isgoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int xWidth, int yHeight)
{
	int x = 0;
	int y = 1;
	while ((y <= yHeight && x <= xWidth))
	{
		x++;
		if (x >= xWidth + 1)
		{
			ft_putchar('\n');
			x = 0;
			y = y + 1;
		}
		else if ((x == 1 && y == 1) || (x >= xWidth && y >= yHeight && yHeight != 1))
		{
			ft_putchar('A');
		}
		else if ((x == xWidth && y == 1) || (x == 1 && y == yHeight))
		{
			ft_putchar('C');
		}
		else if (((x >= 2 || x == xWidth - 1) && (y == 1 || y == yHeight)) || ((x == 1 || x == xWidth) && (y >= 2 || y == yHeight - 1)))
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}	
