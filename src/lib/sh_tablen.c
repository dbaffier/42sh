/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbourgeo <gbourgeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 09:47:57 by gbourgeo          #+#    #+#             */
/*   Updated: 2019/04/30 11:36:41 by dbaffier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "shell_lib.h"

size_t			sh_tablen(const char **table)
{
	size_t		i;

	i = 0;
	if (table)
		while (table[i])
			i++;
	return (i);
}
