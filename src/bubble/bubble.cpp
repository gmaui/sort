
#include "bubble.h"
#include "stdio.h"

void bubble_dump(int*a, int len)
{
	if(!a || !len)
	{
		printf("dump a NULL!\r\n");
		return;
	}

	printf("\r\n bubble dump:\r\n");
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

void bubble_sort(int *a, int len)
{
	if(!a || !len)
	{
		printf("sort a NULL!\r\n");
		return;
	}

	int exchange = len-1; //last change position
	for(int i=0; i< exchange; i++)
	{
		int bound = exchange;
		exchange = 0;
		int j=i+1;
		for(; j<=bound; j++)
		{
			if(a[j-1] > a[j])
			{
				//exchange
				a[j] = a[j] ^ a[j-1];
				a[j-1] = a[j] ^ a[j-1];
				a[j] = a[j] ^ a[j-1];
				exchange = j;
			}
		}
		if(!exchange) break;
	}
    
	return;
}

