/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaznyts <dmaznyts@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 12:28:51 by dmaznyts          #+#    #+#             */
/*   Updated: 2017/07/01 14:56:09 by dmaznyts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "./libft/libft.h"
# define BUFF_SIZE 4

typedef struct	s_gnl
{
	int				fd;
	int				n;
	int				n2;
	char			*s;
	char			tmp[BUFF_SIZE + 1];
	struct s_gnl	*next;
}				t_gnl;

int				get_next_line(const int fd, char **line);

#endif
