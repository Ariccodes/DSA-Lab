#include<stdio.h>

void push(int *stack,int n,int *top,int data){
	if(*top==(n-1)){
		printf("STACK OVERFLOW!!!\n");
	}
	else{
		(*top)++;
		stack[*top]=data;
		printf("%d has been pushed.\n",data);
	}
}

int pop(int *stack,int n,int *top,int *previousTop){
	if(*top==-1){
		printf("STACK UNDERFLOW!!!\n");
		return 0;
	}
	else{
		*previousTop=stack[*top];
		(*top)--;
		printf("%d has been popped.\n",*previousTop);
		return 1;
	}
}

int main(){
	int n=5,stack[n],top=-1,previousTop;
	push(stack,n,&top,1);
//	push(stack,n,&top,2);
//	push(stack,n,&top,3);
//	push(stack,n,&top,4);
//	push(stack,n,&top,5);a
//	push(stack,n,&top,6);
//	printf("\n");

	pop(stack,n,&top,&previousTop);
//	if(pop(stack,n,&top,&previousTop)){
//		printf("Yes,%d INDEED has been popped.\n",previousTop);
//	}
//	if(pop(stack,n,&top,&previousTop)){
//		printf("Yes,%d INDEED has been popped.\n",previousTop);
//	}
//	if(pop(stack,n,&top,&previousTop)){
//		printf("Yes,%d INDEED has been popped.\n",previousTop);
//	}
//	if(pop(stack,n,&top,&previousTop)){
//		printf("Yes,%d INDEED has been popped.\n",previousTop);
//	}
    return 0;
}

