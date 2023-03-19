/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 01:30:55 by seonggoc          #+#    #+#             */
/*   Updated: 2023/03/20 02:59:25 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rec(int n, char *tmp, int size)
{
	if (n == 0)
	{
		return (tmp);
	}
	else
	{
		tmp[size] = n % 10;
		return (ft_rec(n / 10, tmp, size - 1));
	}
}

char	*ft_itoa(int n)
{
	int		sign;
	int		size;
	char	*tmp;

	sign = 1;
	size = 0;
	while (n == 0)
	{
		n /= 10;
		size++;
	}
	if (n < 0)
	{
		sign *= -1;
		tmp = (char *)malloc(sizeof(char) * size + 1 + 1);
	}
	else
	{
		tmp = (char *)malloc(sizeof(char) * size + 1);
	}
	if (!tmp)
		return (0);
	tmp[size + 1] = '\0';
	return (ft_rec(n, tmp, size));
}
