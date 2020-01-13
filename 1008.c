#include <stdio.h>

/*
  Author:zoe
  Date: 2020/1/13 21:14:10
*/

int main()
{
	int k;
	scanf("%d",&k);
	//doesn't the platform of pat approve VLA?
	//when i change it to 100 rather than k + 1,it passed. 
	//but there is a question which was solved with VLA, I am
	// so confused. Why? I don't know. 
	int arr[k + 1]; 
	arr[0] = 0;
	int sum = 0;
	int i,j;
	for(i = 1;i <= k;i ++){
		scanf("%d",&arr[i]);
	}

	for(i = 0;j < k; i++){
		j = i + 1;
		if(arr[j] - arr[i] > 0){
			sum += (6 * (arr[j] - arr[i]));
		}else if(arr[j] - arr[i] < 0){
			sum += (4 * (arr[i] - arr[j]));
		}
	}

	sum += 5*k;
	printf("%d\n",sum);


    return 0;
}

