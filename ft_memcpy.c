/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-ghem <ael-ghem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:01:13 by ael-ghem          #+#    #+#             */
/*   Updated: 2019/10/21 15:39:14 by ael-ghem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;
	size_t			i;
	size_t			len;

	len = 0;
	i = -1;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	pd = (unsigned char*)dst;
	ps = (unsigned char*)src;
	if (!ft_memcmp(dst, src, n))
		return (dst);
	if (!n)
		return (dst);
	while (++i < n)
		pd[i] = ps[i];
	return (dst);
}
