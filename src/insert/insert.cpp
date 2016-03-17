
#include "insert.h"
#include "stdio.h"

void insert_dump(int*a, int len)
{
	if(!a || !len)
	{
		printf("dump a NULL!\r\n");
		return;
	}

	printf("\r\n insert dump:\r\n");
	for(int i=0; i<len; i++)
	{
        if(i%10 == 0 && i != 0)
		{
			printf("\r\n");
		}
		printf("\t%05d ", a[i]);
	}
	printf("\r\n");
    
	return;
}

void insert_sort(int *a, int len)
{
	if(!a || !len)
	{
		printf("sort a NULL!\r\n");
		return;
	}

	for(int i=1; i<len; i++)
	{
		int key = a[i];
		int j=i-1;
		for(; j>=0 && key<a[j]; j--)
		{
			a[j+1] = a[j];
		}
		a[j+1] = key;
	}
    
	return;
}

