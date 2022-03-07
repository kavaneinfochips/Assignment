#include<stdio.h>
void main()
{
   int k;
bool flag=0;
   int array[10]={1,5,4,8,9,2,0,6,11,7};
    printf("ent the element==\n");
   scanf("%d" , &k);
   for(int i=0;i<10;i++)
	{
		if(array[i]==k)
		{
			flag=1;
			break;
		}
	
	}

	if(flag==1)
	printf("Yes");

	else	
	printf("No \n");
  
 
   for(int i=0;i<10;i++)
	{
		printf("%d",array[i]);

	}
}
