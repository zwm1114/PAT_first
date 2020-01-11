/*
    Author:zoe
    Date: 2020/1/7 16:09:26
*/
#include <stdio.h>
typedef struct{
	int *front;
	int *rear;
	int length;
}Point;
typedef struct{
	int team;
	int cityNo;
	Point road;
}Map;

//first,do not know how to store the datas of a graph
int main(){
	int cities,roads,c1,c2;
	scanf("%d %d %d %d",&cities,&roads,&c1,&c2);
	int i = 0;
	Map map[cities];
	while(i < cities){
		map[i].cityNo = i;
		scanf("%d",&map[i].team);
		i ++;
	}
	
	return 0;
}

