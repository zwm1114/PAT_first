/*
    Author:zoe
    Date: 2020/1/14 14:29:03
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int exp;
	float coe;
}poly;

int compar(const void *,const void *);
int main(){
	int k1,k2;
	int i,j;
	int k = 0;
	int count = 0; 
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

	//plus
	for(i = 0;i < k1; i ++){
		for(j = 0; j < k2; j ++){
			rp[k].exp = p1[i].exp + p2[j].exp;
			rp[k].coe = p1[i].coe * p2[j].coe;
			k ++;
		}
	}

	//sort
	qsort(&rp,k,sizeof(poly),compar);
	
	count = k;
	//marry
	for(i = 0;i < k; i++){
		for(j = i+1; j < k;j ++){
			if(rp[i].exp == rp[j].exp){
				rp[i].coe += rp[j].coe;
				count --;
				rp[j].exp = -1;
			}
		}
	}
	printf("%d",count);
	for(i = 0;i < k; i ++){
		if(rp[i].exp != -1 && rp[i].coe != 0){
			printf(" %d %.1f",rp[i].exp,rp[i].coe);
		}
	}
	return 0;
}

int compar(const void *a,const void *b){
	const poly * pa = (const poly *)a;
	const poly * pb = (const poly *)b;

	if(pa->exp > pb->exp){
		return -1;
	}else if(pa->exp < pb->exp){
		return 1;
	}else{
		return 0;
	}
}
