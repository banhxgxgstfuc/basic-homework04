#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int time;
	printf("�п�J���:");
	scanf("%d",&time);
	printf("�ɶ���:%d�p��%d��%d��",time/3600%60,time/60%60,time%60);
	return 0;
}
