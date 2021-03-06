/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 15:46:01 by szheng            #+#    #+#             */
/*   Updated: 2018/05/19 16:48:53 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	else
	{
		while (i <= 46340)
		{
			if ((i * i) == nb)
			{
				return (i);
			}
			i += 1;
		}
		return (0);
	}
}
