#include <stdio.h>
//function prototype
void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size); 
//or void swapArray(int *a, int *b, int size); 


int main() {
	int a = 1, b = 2, c = 3;
	printf("Before swap function : a=%d, b=%d, c=%d\n", a, b, c);
	swapValue(&a, &b ,&c);
	printf("After swap function : a=%d, b=%d, c=%d\n", a, b, c);
	//calling swapArray()
	int d[3]={5,7,9},e[3]={2,4,6};
	printf("\nBEFORE\n");
	printf("ArrayOne : ");
	for(int i=0; i<3; i++){
		printf("%d ", d[i]);
	}
	printf("\nArrayTwo : ");
	for(int i=0; i<3; i++){
		printf("%d ", e[i]);
	}
	printf("\n\nAFTER\n");
	swapArray(d, e, 3);
	printf("ArrayOne : ");
	for(int i=0; i<3; i++){
		printf("%d ", d[i]);
	}
	printf("\nArrayTwo : ");
	for(int i=0; i<3; i++){
		printf("%d ", e[i]);
	}
}

void swapValue(int *a, int *b, int *c){
	int q=*b;
	*b=*c;
	*c=*a;
	*a=q;
}
void swapArray(int a[], int b[], int size){
	for(int i=0; i<size; i++){
		int poo=a[i];
		a[i]=b[i];
		b[i]=poo;
	}
}

