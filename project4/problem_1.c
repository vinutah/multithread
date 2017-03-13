#include <pthread.h>
#include <stdio.h>

// ADD TODO from instructions of project4 

int main (int argc, char *argv[])
{
	int i;
	printf("%d\n",argc);
	
	for (i=0; i<argc-1; i++)
	{
		printf("%s\n",argv[i]);
	}
	return 0;
}
