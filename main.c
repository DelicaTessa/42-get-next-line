/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 15:59:59 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/09 16:00:24 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
    int     fd;
    char    *line;

    if (ac != 2)
    {
        printf("Please run \"./get_next_line file_name\"\n");
        return (1);
    }    
    fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return (1);
    else
    {
        while (get_next_line(fd, &line) == 1)
        {
            printf("%s\n", line);
            free(line);
        }
    }
    free(line);
    close(fd);
    return (0);
}