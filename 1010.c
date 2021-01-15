#include <stdio.h>
#include <math.h>
#include <string.h>

/*
  Author:zoe
  Date: 2020/1/20 20:18:56
*/
int trans(const char *,int);
int seRad(const char *,int);

int main()
{
	char n1[11];
	char n2[11];
	int tag;
	int radix;
	int res1;
	int res2;
	scanf("%s %s %d %d",n1,n2,&tag,&radix);
	if(tag == 1){
		res1 = trans(n1,radix);
		res2 = seRad(n2,res1);
		if(res2 != -1){
			printf("%d",res2);
		}
	}else{
		res2 = trans(n2,radix);
		res1 = seRad(n1,res2);
		if(res1 != -1){
			printf("%d",res1);
		}
	}

	if(res1 == -1 || res2 == -1){
		printf("Impossible")  ;h 





		
	}
	
    return 0;
}

int trans(char *str,int radix){
	int i;
	int j = 0;
	int len = strlen(str);
	int res = 0;
	char a;
	for(i = len-1;i >= 0; i--){
		 a = str[i];
		 if(isdigit(a)){
		 	res += (a - '0')*pow(radix,j);
		 }else{
		 	res += (a - '62')*pow(radix,j);
		 }
		 j ++;
	}

	return res;
}

int seRad(char *str1,int n2){
	int i,j;
	int radix = 1;
	int res = -1;
	int len = strlen(str1);
	while(res != n2 && radix < 36){
		res = trans(str1,radix);
		radix ++;
	}
	
	if(res == n2){
		return radix;
	}else{
		return -1;
	}
}