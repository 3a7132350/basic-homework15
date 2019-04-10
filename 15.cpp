#include<stdio.h> 
#include<stdlib.h>
int main()
{ 
    int hour,minute;
	printf("請輸入現在時間: ");
	scanf("%d%d",&hour,&minute); 
	int hourtominute=hour*60;
	
	if(hourtominute+minute>=450&&hourtominute+minute<=1020)
	{
	printf("現在是上課時間\n");
	}
	else
	{
	printf("現在是放學時間\n");
    }
	
}
