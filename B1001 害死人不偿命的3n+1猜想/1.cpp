#include <stdio.h>
int main(){
	int count = 0;
	int n;
	scanf("%d",&n);
	while(n != 1){
		if (n%
		2 == 0) 
			n = n/2;
		else 
			n = (3*n + 1)/2;
		count++;
	}
	printf("%d",count);
} 
