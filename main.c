#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../get_next_line.h"

int main(int argc, char **argv)
{
	int 	fd;
	char	*line;
	int		status;

	fd = 0;
	fd = 42;
	if (argc > 1)
		fd = open(argv[1], O_RDONLY);
	while ((status = get_next_line(fd, &line)))
	{
		if (status == -1)
		{
			printf("%d\t%s\n", status, line);
			exit(0);
		}
		printf("%d\t%s\n", status, line);
		free(line);
	}
	printf("%d\t%s\n", status, line);
	free(line);
	return (0);
}
