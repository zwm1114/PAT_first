/*
    Author:zoe
    Date: 2020/1/8 15:38:13
*/
#include <stdio.h>
typedef struct{
	int exp;
	float coe;
}poly;
int main(){
	int k1,k2;
	scanf("%d",&k1);
	poly arr_a[k1];
	for(i = 0;i < k1; i ++){
		scanf("%d %ld",&arr_a[i].exp,&arr_a[i].coe);
	}
	scanf("%d",&k2);
	poly arr_b[k1];
	for(i = 0;i < k2; i ++){
		scanf("%d %ld",&arr_b[i].exp,&arr_b[i].coe);
	}
	poly res[k1+k2];
	

	return 0;
}

