/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2d_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaronjones <aaronjones@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:58:45 by ajones            #+#    #+#             */
/*   Updated: 2022/05/13 14:55:30 by aaronjones       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_2d_free(char **newstr)
{
	int		x;
	char	**temp;

	if (!newstr)
		return (NULL);
	x = 0;
	temp = newstr;
	while (temp[x] != NULL)
	{
		free (temp[x]);
		temp[x] = NULL;
		x++;
	}
	free (newstr);
	newstr = NULL;
	return (newstr);
}
