#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../get_next_line.h"

int main()
{
	int 	fd;
	char	*line;
	int		status;

	fd = open("tester.txt", O_RDONLY);
	while ((status = get_next_line(fd, &line)))
	{
		if (status == -1)
			exit(0);
		printf("%d\t%s\n", status, line);
		free(line);
	}
	printf("%d\t%s\n", status, line);
	free(line);
	return (0);
}
