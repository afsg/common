#include <stdio.h>



#include "my_base.h"

int my_get_file_size(char *filename)
{
	struct stat st_fStat = {0};
	
	ret = stat(filename, &st_fStat);
	if(ret)
		return ~0;
	else
		return st_fStat.st_size;
}



