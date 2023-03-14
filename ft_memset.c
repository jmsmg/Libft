/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:52:21 by seonggoc          #+#    #+#             */
/*   Updated: 2023/03/14 21:33:22 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
void	*ft_memset(void *b, int c, size_t len)
{
	char			*tmp;
	unsigned long	i;

	i = 0;
	if (!(*b))
	{
		return (NULL);
	}
	tmp = (char *)b;
	while (i < len)
	{
		tmp[i] = c;
		i++;
	}
	return (b);
}
