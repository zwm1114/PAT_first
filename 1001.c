/*
    Author:zoe
    Date: 2020/1/7 10:34:43
*/
#include <stdio.h>
#include <string.h>

int main(){
	long a,b;
	char str[10];
	char res[10];
	scanf("%ld %ld",&a,&b);
	sprintf(str,"%ld",a+b);
	int len = strlen(str);
	int n,comma;
	//with sign
	if(str[0] == '-' || str[0] == '+'){
		n = len - 1;
		//n marks the number of digit
	}else{
	//no sign
	 	n = len;
	}
	if(n%3 == 0){
		comma = n/3 -1;
	}else{
		comma = n/3;
	}
	n = len + comma;
	res[n] = '\0';
	int i = 0; 
	char *j = &str[len-1];
	while(j >= str){	
		if(i != 0&&!(i%3) && comma){
			res[--n] = ',';
			comma --;
			i = 0;
		}else{
			res[--n] = *j;
			j--;
			i ++;	
		}		
	}

	printf("%s",res);
	return 0;
}

