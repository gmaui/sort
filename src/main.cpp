
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#include "insert.h"
#include "shellinsert.h"
#include "bubble.h"

#define MAX_NUM 100
int A[MAX_NUM]={0};

void generateRandArray(int *, int);

typedef void (*dump)(int *a, int len);
typedef void (*sort)(int *a, int len);

typedef struct sort_interface_t{
	dump d;
	sort s;
}sort_interface;

sort_interface g_sortTable[]=
{
	{insert_dump, insert_sort},
	{shellinsert_dump, shellinsert_sort},
	{bubble_dump, bubble_sort},
	{NULL, NULL},
};

#define SIZE(n) (int)( sizeof(n)/sizeof(n[0]) )

int main(int argc, char **argv)
{
    generateRandArray( A, SIZE(A) );

    //1. insert
	for(int i=0; i<SIZE(g_sortTable); i++)
	{
		if(g_sortTable[i].d && g_sortTable[i].s)
		{
			g_sortTable[i].d(A, SIZE(A));
			g_sortTable[i].s(A, SIZE(A));
			g_sortTable[i].d(A, SIZE(A));
		}
	}

	return 0;
}

void generateRandArray(int* a, int len)
{
	if(!a || !len)
	{
		printf("Warning: input array is NULL!\r\n");
		return;
	}

	srand((unsigned) time(NULL));

	for(int i=0; i < len; i++)
	{
		a[i] = rand() % 10000;
	}
}
