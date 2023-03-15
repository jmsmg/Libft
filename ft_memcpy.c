/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:32:10 by seonggoc          #+#    #+#             */
/*   Updated: 2023/03/15 17:49:39 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*tmp_d;
	char		*tmp_s;
	size_t		i;

	tmp_d = (char *)dst;
	tmp_s = (char *)src;
	i = 0;
	while (tmp_d[i] && i < n)
	{
		tmp_d[i] = tmp_s[i];
		i++;
	}
	return (dst);
}
