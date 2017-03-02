#include<stdio.h>
int main(){
	int point = 0;
	int input;
	int array[10]={0,0,0,0,0,0,0,0,0,0};
	for(;;point++){
	scanf("%d",&input);
	if(point>=10){point-=10;}
        array[point]=input;
	int i;
		for(i=0;i<10;i++){
		printf("list%d=%d\n",i+1,array[i]);
		}
	}
	return 0;
}
