# get_next_line

The aim of this project is to make a function that returns a line<br />
ending with a newline, readed from a file descriptor.<br />

[Original task](https://drive.google.com/open?id=0B-X0pRysneuASTFhb3RMWXROT28)

## On UNIX systems (usage)

Add header file to your main or whatever.

```sh
#include "get_next_line.h"
```

Prototype of function:

```sh
int	get_next_line(const int fd, char **line)
```

Example of 'main.c':

```sh
#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("Usage: ./test_gnl <file>\n");
		return (0);
	}
	int fd = open(av[1], O_RDONLY);
	char *line = (char*)malloc(sizeof(char) * 2000);

	int i = get_next_line(fd, &line);
	printf("line : %s\nreturned : %d\n--------------------------------\n", line, i);
	i = get_next_line(fd, &line);
	printf("line : %s\nreturned : %d\n--------------------------------\n", line, i);
	i = get_next_line(fd, &line);
	printf("line : %s\nreturned : %d\n--------------------------------\n", line, i);
	return (0);
}
```

Test file:

```sh
12345678
qwertyui
```

Output is:

```sh
$ ./gnl test
line : 12345678
returned : 1
--------------------------------
line : qwertyui
returned : 1
--------------------------------
line : qwertyui
returned : 0
--------------------------------
```
