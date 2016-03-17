
#include "insert.h"
#include "stdio.h"

void shellinsert_dump(int*a, int len)
{
	if(!a || !len)
	{
		printf("dump a NULL!\r\n");
		return;
	}

	printf("\r\n shellinsert dump:\r\n");
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

void shellinsert_sort(int *a, int len)
{
	if(!a || !len)
	{
		printf("sort a NULL!\r\n");
		return;
	}

	for(int d=len/2; d>=1; d/=2)
	{
		for(int i=d+1; i<len; i++) 
		{
			int key = a[i];
			int j=i-d;
			for(; j>=0 && key<a[j]; j-=d)
			{
				a[j+d] = a[j];
			}
			a[j+d] = key;
		}
	}
    
	return;
}

