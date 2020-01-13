#include <stdio.h>

/*
  Author:zoe
  Date: 2020/1/13 20:31:17
*/

int main()
{
	int k;
	scanf("%d",&k);
	int i,j;
	int sum = -1;
	int arr[k];
	int temp;
	int start,end;
	for(i = 0;i < k;i ++){
		scanf("%d",&arr[i]);
	}
	for(i = 0;i < k;i ++){
		temp = 0;
		for(j = i;j < k;j ++){
			temp += arr[j];
			if(temp > sum){
				sum = temp;
				start = arr[i];
				end = arr[j];
			}
		}
	}

	if(sum < 0){
		printf("0 %d %d",arr[0],arr[k-1]);
	}else{
		printf("%d %d %d",sum,start,end);
	}
    return 0;
}

