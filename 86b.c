#include <stdio.h>

int main(void)  
{
	char number[10];
	int num,flag=0,j;
	scanf("%s",number);
	for(num=0;number[num]!='\0';num++)
	{
		for(j=num+1;number[j]!=0;j++)
		{
			if(number[num]==number[j])
			{
				printf("no");
				flag=1;
				break;
			}
		}
		if(flag==1)
		break;
	}

if(flag==0)
{
	printf("yes");
}
	return 0;
}
