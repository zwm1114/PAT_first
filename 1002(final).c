/*
    Author:zoe
    Date: 2020/1/8 15:38:13
*/
#include <stdio.h>
typedef struct{
	int exp;
	double coe;
}poly;

int main(){
	int k1,k2,i;
	
	scanf("%d",&k1);
	poly arr_a[k1];
	for(i = 0;i < k1; i ++){
		scanf("%d %lf",&arr_a[i].exp,&arr_a[i].coe);
	}
	
	scanf("%d",&k2);
	poly arr_b[k1];
	for(i = 0;i < k2; i ++){
		scanf("%d %lf",&arr_b[i].exp,&arr_b[i].coe);
	}
	
	poly res[k1+k2];
	
	int j = 0;
	int k = 0;
	i = 0;
	 
	while(i < k1 && j < k2){
		if(arr_a[i].exp > arr_b[j].exp){
			res[k] = arr_a[i];
			k ++;
			i ++;
			continue;
		}
		if(arr_a[i].exp < arr_b[j].exp){
			res[k] = arr_b[j];
			k ++;
			j ++;
			continue;
		}
		if(arr_a[i].exp == arr_b[j].exp){
			if((arr_a[i].coe + arr_b[j].coe) == 0){
				i ++;
				j ++;
				continue;
			}
			res[k].exp = arr_a[i].exp;
			res[k].coe = arr_a[i].coe + arr_b[j].coe;
			k ++;
			i ++;
			j ++;
		}
	}

	while(i < k1){
		res[k] = arr_a[i];
		k ++;
		i ++;
	}

	while(j < k2){
		res[k] = arr_b[j];
		k ++;
		j ++;
	}

	printf("%d",k);
	for(i = 0;i < k;i ++){
		printf(" %d %.1f",res[i].exp,res[i].coe);
	}

	return 0;
}

