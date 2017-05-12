#include<stdio.h>

int main(){
	int a,b,temp,final,i;

	a=0,b=1,final=0;

	scanf("%d",&temp);

	if(temp == 0){
		final = 0;
	}else if(temp == 1){
		final = 1;
	}else{
		for(i=2;i<=temp;i++){
			final = a+b;
			a = b;
			b = final;
		}
	}

	printf("%d\n",final);

}