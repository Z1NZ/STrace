#include <stdlib.h>
#include <linux/limits.h>
#include <dirent.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include "tools.h"

static char		*get_absolute_path(char *binary)
{
	char *path;
	char *tmp;

	if (!(path = getenv("PATH")))
	{
		errno = ENOENT;
		perror("get_absolute_path");
		return NULL;
	}
	tmp = strtok(path, ":");
	while(0xDEADBEEF)
	{
		if (tmp == NULL)
			break;
		DIR *directory;
		if ((directory = opendir(tmp)))
		{
			struct dirent	*dp;
			size_t			len;
			char			*ret;

			len = strlen(binary);
			while ((dp = readdir(directory)) != NULL)
			{
				if (strcmp(dp->d_name, binary) == 0)
				{
					if(closedir(directory) == -1)
					{
						perror("get_absolute_path");
						exit(-1);
					}
					if (!(ret = (char *)calloc(sizeof(char), strlen(tmp) + len + 2)))
						return (NULL);
					strcat(ret, tmp);
					strcat(ret, "/");
					strcat(ret, binary);
					return (ret);
				}
			}
			if (closedir(directory) == -1)
			{
				perror("get_absolute_path");
				exit(-1);
			}
		}
		tmp = strtok(NULL, ":");
	}
	return(NULL);
}


char			*get_binary_path(char *binary)
{

	if (strlen(binary) > PATH_MAX)
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
