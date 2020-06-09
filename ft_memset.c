/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdonga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:50:25 by pdonga            #+#    #+#             */
/*   Updated: 2019/10/12 07:29:24 by pdonga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *dst, int ch, size_t len)
{
	unsigned char	*pdst;
	size_t			i;

	i = 0;
	pdst = (unsigned char*)dst;
	while (i < len && pdst[i])
	{
		pdst[i++] = (unsigned char)ch;
	}
	return (dst);
}
