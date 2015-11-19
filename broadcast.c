#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>

#define OUT_LENGTH 4096*1024

int main()
{
	int fd,len,i;
	int *outbuf;
	
	outbuf = (int*)malloc(OUT_LENGTH);
	memset(outbuf,0xaa,OUT_LENGTH);
	
	fd = open("/dev/dabpcidev",O_WRONLY);
	if(fd>=0)
	{
		printf("open the dab device successfully.");
	}
	else
	{	
		printf("open the dab device failed.");
		exit(1);
	}	
	write(fd,outbuf,OUT_LENGTH);
	
	sleep(10);
	close(fd);
	
	
	
	if(fd<0)
		printf("close the dab device.");


}