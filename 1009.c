/*
    Author:zoe
    Date: 2020/1/14 14:29:03
*/
#include <stdio.h>
typedef struct{
	int exp;
	float coe;
}poly;

int main(){
	int k1,k2;
	int i,j;
	int k = 0; 
	scanf("%d",&k1);
	poly p1[k1];
	for(i = 0;i < k1;i ++){
		scanf("%d %f",&p1[i].exp,&p1[i].coe);
	}
	scanf("%d",&k2);
	poly p2[k2];
	for(i = 0;i < k2;i ++){
		scanf("%d %f",&p2[i].exp,&p2[i].coe);
	}
	poly rp[k1*k2];

	for(i = 0;i < k1; i ++){
		for(j = 0; j < k2; j ++){
			rp[k].exp = p1[i].exp + p2[j].exp;
			rp[k].coe = p1[i].coe * p2[j].coe;
			k ++;
		}
	}

	for(i = 0;i < k; i++){
		for(j = i+1; j < k;j ++){
			if(rp[i].exp == rp[j].exp){
				rp[i].coe += rp[j].coe;
				rp[j].coe = 0;
			}
		}
	}
	printf("%d",k-1);
	for(i = 0;i < k; i ++){
		if(rp[i].coe != 0){
			printf(" %d %.1f",rp[i].exp,rp[i].coe);
		}
	}
	return 0;
}

