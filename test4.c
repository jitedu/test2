#include "student_info.h"
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{

	int num[40];
	int i;
	int k;
	int j;
	int l=0;
	int flag=0;
	
	for (i = 0; i < sizeof(info)/sizeof(struct student); ++i) {
		k=rand()%40;
	if(i==0) { num[0]=k;l++;}
	else{
		while(flag==0)
		{

			for(j=0;j<l;j++)
			{
				if(num[j]==k)
				{
					k=rand()%40;
					break;
				}
			}
			if(j==l)flag=1;
		}
		flag=0;
		num[l]=k;
		l++;

	}
		printf("%d - %s\n", info[i].id, info[k].name);
		if(l%4==0)
		  printf("\n\n\n");
	}
	return 0;
}
