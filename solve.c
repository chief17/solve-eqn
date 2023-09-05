#include<stdio.h>
#include<math.h>
int main()
{
	printf("Enter number x:");
	int x;
	scanf("%d",&x);
	float result = 1-(pow(x,2)/facto(2))+(pow(x,4)/facto(4))-(pow(x,6)/facto(6))+(pow(x,8)/facto(8))-(pow(x,10)/facto(10));
	printf("%f",result); 
}

int facto(int num)
{
	int y =1;
	for(int x = 0; x<num; x++)
	{
		y=y*(x+1);
	}

	return y;
}
