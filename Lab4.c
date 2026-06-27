#include<stdio.h>

void enqueue(int n,int *queue,int *front,int *back,int value){
	if(*back==n-1){
		printf("OVERFLOW!!!\n");
	}
	else{
		if(*front==-1 && *back==-1){
			*front=0,*back=0;
			queue[*back]=value;
			printf("%d has been enqueued.\n",value);
		}
		else{
			(*back)++;
			queue[*back]=value;
			printf("%d has been enqueued.\n",value);
		}
	}
}

void dequeue(int n,int *queue,int *front,int *back,int *dequeuedElement){
	if(*front==-1){
		printf("UNDERFLOW!!!\n");
	}
	else{
		*dequeuedElement=queue[*front];
		if(*front==*back){
			*front=-1,*back=-1;
		}
		else{
			(*front)++;
		}
		printf("%d has been dequeued.\n",*dequeuedElement);
	}
}

void circularEnqueue(int n,int *circularQueue,int *circularFront,int *circularBack,int value){
	if((*(circularBack)+1)%n==*circularFront){
		printf("OVERFLOW!!!\n");
	}
	else{
		if(*circularFront==-1 && *circularBack==-1){
			*circularFront=0,*circularBack=0;
			circularQueue[*circularBack]=value;
			printf("%d has been circularly enqueued.\n",value);
		}
		else{
			(*circularBack)++;
			circularQueue[*circularBack]=value;
			printf("%d has been circularly enqueued.\n",value);
		}
	}
}

void circularDequeue(int n,int *circularQueue,int *circularFront,int *circularBack,int *dequeuedElement){
	if(*circularFront==-1 && *circularBack==-1){
		printf("UNDERFLOW!!!\n");
	}
	else{
		if(*circularFront==*circularBack){
			*dequeuedElement=circularQueue[*circularFront];
			*circularFront=-1,*circularBack=-1;
			printf("%d has been circularly dequeued.\n",*dequeuedElement);
		}
		else{
			*dequeuedElement=circularQueue[*circularFront];
			(*circularFront)++;
			printf("%d has been circularly dequeued.\n",*dequeuedElement);
		}
	}
}

int main(){
	
	//Linear Queue
	
	int n=5,queue[n],front=-1,back=-1,dequeuedElement;
	enqueue(n,queue,&front,&back,1);
//	enqueue(n,queue,&front,&back,2);
//	enqueue(n,queue,&front,&back,3);
//	enqueue(n,queue,&front,&back,4);
//	enqueue(n,queue,&front,&back,5);
//	enqueue(n,queue,&front,&back,6);
	printf("\n\n");
	
	dequeue(n,queue,&front,&back,&dequeuedElement);
//	dequeue(n,queue,&front,&back,&dequeuedElement);
//	dequeue(n,queue,&front,&back,&dequeuedElement);
//	dequeue(n,queue,&front,&back,&dequeuedElement);
//	dequeue(n,queue,&front,&back,&dequeuedElement);
//	dequeue(n,queue,&front,&back,&dequeuedElement);
	printf("\n\n\n\n");
	
	//Circular Queue
	
	int circularQueue[n],circularFront=-1,circularBack=-1;
	circularEnqueue(n,circularQueue,&circularFront,&circularBack,1);
//	circularEnqueue(n,circularQueue,&circularFront,&circularBack,2);
//	circularEnqueue(n,circularQueue,&circularFront,&circularBack,3);
//	circularEnqueue(n,circularQueue,&circularFront,&circularBack,4);
//	circularEnqueue(n,circularQueue,&circularFront,&circularBack,5);
//	circularEnqueue(n,circularQueue,&circularFront,&circularBack,6);
	
	printf("\n\n");
	
	circularDequeue(n,circularQueue,&circularFront,&circularBack,&dequeuedElement);
//	circularDequeue(n,circularQueue,&circularFront,&circularBack,&dequeuedElement);
//	circularEnqueue(n,circularQueue,&circularFront,&circularBack,4);
//	circularEnqueue(n,circularQueue,&circularFront,&circularBack,5);
//
//	printf("%d is circularly at the front.\n",circularQueue[circularFront]);
//	printf("%d is circularly at the back.\n",circularQueue[circularBack]);
    return 0;
}

