#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a isgreater");
	}
	else if(b>a&&b>c)
	{
		printf("b is greater");
	}
	else
	{
	  printf("c is greater");	
	}
}
