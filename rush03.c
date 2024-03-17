/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgoh <isgoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:48:53 by isgoh             #+#    #+#             */
/*   Updated: 2024/03/17 10:58:07 by isgoh            ###   ########.fr       */
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
		if (yCount == 1 || yCount == yHeight)
		{
			if (xCount == 1)
			{
				ft_putchar('A');
			}
			else if (xCount == xWidth)
			{
				ft_putchar('C');
			}
			else
			{
				ft_putchar('B');
			}

		}
		if (yCount >= 2 && yCount <= yHeight - 1)
		{
			if (xCount == 1 || xCount == xWidth)
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
