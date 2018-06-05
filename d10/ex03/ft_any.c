/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 17:40:00 by szheng            #+#    #+#             */
/*   Updated: 2018/05/28 17:42:14 by szheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f) (char*))
{
	while (*tab != 0)
	{
		if (f(*(tab++)))
			return (1);
	}
	return (0);
}