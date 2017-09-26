#include <stdio.h>

int main(void)
{
	int arr[3][3];
	
	for(int k=0;k<3;k++)
	{
		for(int l=0;l<3;l++)
		{
		  	arr[k][l]=0;
		}
	}
	
	for(;;)
	{
		int ipu;
		int spa;
		int sep;
		
		scanf("%d",&ipu);
		
		spa=ipu%3;
		
		sep=ipu/3;
		
		arr[sep][spa]++;
		
		if(ipu==100)
		break;
		
		for(int k=0;k<3;k++)
		{
		   for(int l=0;l<3;l++)
		   {
		  	 printf("%d",arr[k][l]);
		   }
		   printf("\n");
		}
	}
	
	return 0;
}
