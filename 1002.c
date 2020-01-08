/*
    Author:zoe
    Date: 2020/1/7 15:28:18
*/
/*
	first,how to store two arrays,and where should the result be put in
	there are three ways to deal with it,first way:add second array behind first array
	with a few reflection, I found it is not appropriate,second way: let the longer one as 
	the finall array where store the result,here is a question,what if the two arrays are 
	complementary?that will result segment fault.My codes in the next have adopted this way!
	In the halfway, I gave up.so the only choice is the third way:create a new array whose 
	length is the sum of two arrays. that's it!
	when you are coding, you should think of what will happen in adding two digits,does it equal 0?
	be careful! 
 */
#include <stdio.h>
#include <stdlib.h>
int compar(const void *,const void *);
typedef struct{
	int exponents;
	float coefficients;
}polynomial;

int main(){
	polynomial arrA[10];
	polynomial arrB[10];
	polynomial * res = &arrA;
	polynomial * temp = &arrB;
	int k1,k2;
	int i = 0;
	scanf("%d",&k1);
	while(i < k1){
		scanf("%d %ld",&arrA.exponents,&arrA.coefficients);
	}
	rel = k1;
	i = 0;
	scanf("%d",&k2);
	while(i < k2){
		scanf("%d %ld",&arrB.exponents,&arrB.coefficients);
	}
	tml = k2;
	// there is no repeated data
	
	//marry A and B,choose the longer one 
	if(k1 < k2){
		res = &arrB;
		temp = &arrA;
		rel = k2;
		tml = k1;
	}

	for(i = 0;i < rel;i ++){
		for(j = 0; j < tml;j ++){
			if((temp+j)->exponents = (res+i)->exponents){
				(res+i)->coefficients += (temp+j)->coefficients;
			}
		}
	}

	//sort
	qsort(res,rel,sizeof(polynomial),compar);

	return 0;
}

int compar(const void *a,const void *b){
	const polynomial *pa = (const polynomial *)a;
	const polynomial *pb = (const polynomial *)b;

	if(pa->coefficients > pb->coefficients){
		return -1;
	}else if(pa->coefficients < pb->coefficients){
		return 1;
	}else{
		return 0;
	}
}