/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:44:29 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/07 07:56:51 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = NULL;
	if ((ptr = (void*)malloc(sizeof(void) * size)) == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		((unsigned char*)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
