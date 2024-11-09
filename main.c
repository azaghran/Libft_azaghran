/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghran <azaghran@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:49:07 by azaghran          #+#    #+#             */
/*   Updated: 2024/11/09 18:15:44 by azaghran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*d = NULL;
	char	*s = "Ahmed";
	size_t	len;
	
	len = strlcat(d, s, 0);
	printf("%zu\n", len);
	printf("%s\n", d);
}
