/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:47:21 by iergun            #+#    #+#             */
/*   Updated: 2022/12/22 17:47:53 by iergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t s1, size_t s2)
{
	void	*s;

	s = malloc(s1 * s2);
	if (!s)
		return (s);
	ft_bzero(s, (s1 * s2));
	return (s);
}
