/*
    Author:zoe
    Date: 2020/1/7 15:28:18
*/
#include <stdio.h>
#include <stdlib.h>
int compar(const void *,const void *);
typedef struct{
	int exponents;
	float coefficients
}polynomial;

int main(){
	polynomial arrA[10];
	polynomial arrB[10];
	polynomial res[10];
	int k1;
	scanf("%d",&k1);
	int i = 0;
	while(i < k1){
		scanf("%d %ld",&arrA.exponents,&arrA.coefficients);
	}
	scanf("%d",&k2);
	int i = 0;
	while(i < k2){
		scanf("%d %ld",&arrB.exponents,&arrB.coefficients);
	}
	int k = 0;

	//marry A and B
	for(i = 0;i < k1; i++){
		j = 0;
		while(arrA.exponents != arrB.exponents){
			j ++;
			if(j == k2){
				break;
			}
		}
		res[k] = arrB[j];
		k ++;
	}

	//sort
	


	return 0;
}

