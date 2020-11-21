/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 22:50:19 by iadrien           #+#    #+#             */
/*   Updated: 2020/11/15 22:50:34 by iadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void 	exit_error(char *s, int n)
{
	write(2,"Error\n",6);
	write(2,s,ft_strlen(s));
	exit(n);
}

void 		print_command_error(t_command *comm)
{
	write(2, "bash: -bash: ",13);
	write(2, comm->command, ft_strlen(comm->command));
	write(2, ": command not found\n",20);
}
