/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghran <azaghran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:38:58 by azaghran          #+#    #+#             */
/*   Updated: 2024/11/04 18:25:20 by azaghran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((*s != '\0') && (*s != (char)c))
		s++;
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}




