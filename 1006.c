#include <stdio.h>
#include <string.h>
/*
  Author:zoe
  Date: 2020/1/11 19:30:28
*/
typedef struct{
	char id [16];
	char inTime [10];
	char outTime [10];
}Student;
int main()
{
	int M;
	scanf("%d",&M);
	
	Student stus [M];
	int i;	

	for(i = 0;i < M;i ++){
		scanf("%s %s %s",stus[i].id,stus[i].inTime,stus[i].outTime);
	}

	int earIndex = 0;
	int lastIndex = 0;	

	for(i = 0;i < M;i ++){
		if(strcmp(stus[i].inTime,stus[earIndex].inTime) < 0){
			earIndex = i;
		}
		//here,you should not use if else, there is one situation:one 
		//sign in as well as sign out 
		if(strcmp(stus[i].outTime,stus[lastIndex].outTime) > 0){
			lastIndex = i;
		}
	}

	printf("%s %s",stus[earIndex].id,stus[lastIndex].id);
    return 0;
}

