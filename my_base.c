#include <stdio.h>



#include "my_base.h"

int my_get_file_size(char *filename)
{
	struct stat finfo = {0};
	
	ret = stat(filename, &finfo);
	if(ret)
		return ~0;
	else
		return finfo.st_size;
}



