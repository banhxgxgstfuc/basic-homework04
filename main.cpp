#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int time;
	printf("請輸入秒數:");
	scanf("%d",&time);
	printf("時間為:%d小時%d分%d秒",time/3600%60,time/60%60,time%60);
	return 0;
}
