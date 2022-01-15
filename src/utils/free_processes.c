/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_processes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smephest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 23:06:25 by smephest          #+#    #+#             */
/*   Updated: 2021/04/27 23:06:33 by smephest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void
	free_list_item(t_proc *item)
{
	free(item);
}

void
	free_processes(t_list **t)
{
	ft_lstclear(t, (void (*)(void *))free_list_item);
}
