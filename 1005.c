#include <stdio.h>
#include <string.h>
/*
  Author:zoe
  Date: 2020/1/10 23:11:31
*/

typedef struct 
{
	char sign[6];
}Num;

const Num num[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
int main()
{
	char inputNum[102];
	scanf("%s",inputNum);
	int len = strlen(inputNum);
	int i = 0;
	int sum = 0;
	for(i = 0;i < len;i ++){
		sum += (inputNum[i] - '0');
	}

	int temp = sum;
	int count = 1;
	while(temp > 9){
		temp /= 10;
		count *= 10;
	}
	int output;
	while(count >= 1){
		output = sum/count;
		sum %= count;
		count /= 10;
		printf("%s",num[output].sign);
		if(count != 0){
			printf(" ");
		}
	}
    return 0;
}

