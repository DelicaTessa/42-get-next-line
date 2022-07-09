/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/03 12:10:42 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/16 11:26:17 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUF_SIZE
#  define BUF_SIZE 32
# endif
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <sys/types.h>

size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
char	*ft_remainder(char *str, int start);
int		get_next_line(const int fd, char **line);

#endif
