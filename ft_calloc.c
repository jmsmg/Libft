/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 23:42:42 by seonggoc          #+#    #+#             */
/*   Updated: 2023/03/19 22:34:32 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
	{
		return (0);
	}
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (void *)tmp;
}
