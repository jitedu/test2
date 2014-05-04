#include "student_info.h"
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int i;
	time_t t;
	for (i = 0; i < sizeof(info)/sizeof(struct student); ++i) {
		printf("%d - %s\n", info[i].id, info[i].name);
	}
	for(i=1;i<11;i++)
	{
	printf("第%d组成员：\n",i);
	int k,t,p,q;
	t++;
	srand((unsigned)time (&t));
	k=rand()%40;	
	printf("%d - %s\n", info[k].id, info[k].name);	
	t=rand()%40;
	printf("%d - %s\n", info[t].id, info[t].name);	
	p=rand()%40;
	printf("%d - %s\n", info[p].id, info[k].name);	
	q=rand()%40;
	printf("%d - %s\n", info[q].id, info[q].name);	
	}
	return 0;
}
