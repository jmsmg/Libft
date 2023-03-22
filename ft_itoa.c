/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 01:30:55 by seonggoc          #+#    #+#             */
/*   Updated: 2023/03/22 16:38:19 by seonggoc         ###   ########.fr       */
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
		if (n < 0)
		{
			tmp[size] = -(n % 10) + '0';
		}
		else
		{
			tmp[size] = n % 10 + '0';
		}
		return (ft_rec(n / 10, tmp, size - 1));
	}
}

char	*ft_itoa(int n)
{
	int		len;
	int		size;
	char	*tmp;

	size = 0;
	len = n;
	while (len != 0)
	{
		len /= 10;
		size++;
	}
	if (n < 0)
	{
		tmp = (char *)malloc(sizeof(char) * size + 1 + 1);
		tmp[0] = '-';
		size++;
	}
	else
	{
		tmp = (char *)malloc(sizeof(char) * size + 1);
	}
	if (!tmp)
		return (0);
	tmp[size] = '\0';
	return (ft_rec(n, tmp, size - 1));
}
/*
#include <stdio.h>
int	main()
{
	printf("%s", ft_itoa(-156));
}
*/
