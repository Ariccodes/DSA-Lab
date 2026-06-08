#include<stdio.h>
#include<stdlib.h>

int main(){
	int size=9,i;
	int *arr=(int*)malloc(sizeof(int)*size);
	
	for(i=0;i<size;i++){
		arr[i]=i;
		if(i>=3){
			arr[i]=i+1;
		}
	}
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
    return 0;
}

