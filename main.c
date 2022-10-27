#include <fcntl.h>
#include "get_next_line.h"

int main()
{
	int fd = open( "file.txt", O_CREAT | O_RDONLY , 0777);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
}