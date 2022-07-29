/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-ghem <ael-ghem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:23:59 by ael-ghem          #+#    #+#             */
/*   Updated: 2019/10/19 15:33:25 by ael-ghem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		if (!(sub = (char*)malloc(sizeof(char))))
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	if (!(sub = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
