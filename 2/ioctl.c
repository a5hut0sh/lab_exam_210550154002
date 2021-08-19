#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include "ioctl_header.h"



int main()
{
	int fd;




	fd = open("/dev/MyIoctl",O_RDWR,0777);
	if(fd<0) 
	{
		printf("not able to open the device\n");
		return -1;
	}
	
	ioctl(fd,OPT,&data);
	close(fd);
	return 0;
}
