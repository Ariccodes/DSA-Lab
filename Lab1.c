#include<stdio.h>
#include<stdlib.h>

int insert(int size, int position, int value, int *arr){
    int i;
    size++;
    arr=realloc(arr, sizeof(int)*size);
    for(i=size-1;i>=position;i--){
        arr[i]=arr[i-1];
    }
    arr[position-1]=value;
    return size;
}

int delete(int size,int position,int *arr){
	int i;
	for(i=position;i<size;i++){
		arr[i-1]=arr[i];
	}
	size--;
	arr=realloc(arr,sizeof(int)*size);
	return size;
}

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
	
	size=insert(size,4,3,arr);
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n\n");
	
//------------------------------------------------------------//
	
	for(i=0;i<size;i++){
		arr[i]=i;
		if(i>3){
			arr[i]=i-1;
		}
	}
	arr[3]=67;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	size=delete(size,4,arr);
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
    return 0;
}
