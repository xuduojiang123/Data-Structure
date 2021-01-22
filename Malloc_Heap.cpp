#include"stdio.h"
#include"stdlib.h"
int main()
{
	int *p = (int*) malloc(1000*sizeof(int));
	if (p == NULL)
	{
		printf("malloc error\n");
		return -1;
	}
	*(p+1) = 100;
	*(p+0) = 20;
	printf("*(p+0)=%d\n",*(p+0));
	free (p);
	return 0;
}
