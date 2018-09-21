/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 17:53:23 by tngwenya          #+#    #+#             */
/*   Updated: 2018/08/16 09:10:33 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_list	*findlink(t_list **file, int fd)
{
	t_list *temp;

	temp = *file;
	while (temp)
	{
		if ((int)temp->content_size == fd)
			return (temp);
		temp = temp->next;
	}
	temp = ft_lstnew("\0", fd);
	ft_lstadd(file, temp);
	return (temp);
}

static int		getposition(char *temp)
{
	size_t i;

	i = 0;
	while (temp[i] != '\n' && temp[i] != '\0')
		i++;
	return (i);
}

static int				gnlfunct(t_list **file, char **line)
{
	int		i;
	t_list	*temp;
	char	*tmp2;

	temp = *file;
	i = getposition(temp->content);
	tmp2 = temp->content;
	*line = ft_strsub(temp->content, 0, i);
	if ((size_t)i == ft_strlen(temp->content))
		ft_strclr(temp->content);
	else
	{
		temp->content = ft_strsub(tmp2, i + 1, ft_strlen(tmp2));
		free(tmp2);
	}
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	char			buffer[BUFF_SIZE + 1];
	int				iter;
	static t_list	*file;
	t_list			*temp;
	char			*tmp2;

	if (fd < 0 || !line || read(fd, buffer, 0) < 0)
		return (-1);
	temp = findlink(&file, fd);
	while ((iter = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		tmp2 = temp->content;
		buffer[iter] = '\0';
		temp->content = ft_strjoin(temp->content, buffer);
		free(tmp2);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	if (iter == 0 && !ft_strlen(temp->content))
		return (0);
	return (gnlfunct(&temp, line));
}
