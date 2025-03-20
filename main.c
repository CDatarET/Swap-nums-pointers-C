#include <stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

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
	    swap(&a,&b);
		printf("%d is now swapped with %d \n", a,b);
	}
	else{
		int t = a;
		a = b;
		b = t;
		printf("%d is now swapped with %d \n", a,b);
	}
}
