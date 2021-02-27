#include<stdio.h>
#include<string.h>
int ele[110];
int main(){
	int n, sum=0;
	int min=0;
	scanf("%d", &n);
	int i = 0;
	for(i = 0; i < n; i++){
		scanf("%d", &ele[i]);
		if(ele[i]>min){
			sum += (ele[i]-min)*6;
			min = ele[i];
		}else if(ele[i] < min){
			sum += (min-ele[i])*4;
			min = ele[i];
		}
	}
	sum += 5*n;
	printf("%d\n", sum);
	return 0;

}
