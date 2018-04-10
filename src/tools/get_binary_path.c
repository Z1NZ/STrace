
#include <linux/limits.h>


char	*get_absolute_path(char *binary)
{
	char **path;
	char tmp;

	if (!(path = getenv("PATH")))
	{
		errno = ENOENT
		perror("get_absolute_path");
		return NULL;
	}
	while((tmp = strtok(path, ':'))
	{
	}
}

char	*get_binary_path(char *binary)
{

	if (strlen(binary) > sizeof(pathname))
	{
		errno = ENAMETOOLONG;
		perror("get_binary_path");
		return NULL;
	}
	if (strchr(binary, '/'))
		return (strdup(binary));
	else
		return (get_absolute_path(binary));
}
