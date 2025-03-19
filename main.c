#include <stdio.h>

int main(){
	printf("Enter a number\n");
	int a;
	scanf("%d", &a);
	
	printf("Enter a number\n");
	int b;
	scanf("%d", &b);
	
	printf("use pointer? y/n\n");
	char c;
	scanf(" %c", &c);
	
	if(c == 'y'){
		int *t = &a;
		*a = &b;
		int *b = t;
		
		printf("%d is now swapped with %d \n", a,b);
	}
	else{
		int t = a;
		a = b;
		b = t;
		printf("%d is now swapped with %d \n", a,b);
	}
}
