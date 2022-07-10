/*
#include <stdio.h>
//a program in C to insert New value in the array (sorted list )
void insertElem(int arr[],int size,int number){
    int i,pos;
    for(i=0;i<size;i++){
        if(arr[i] > number){
            pos = i;
            break;
        }
        
    }
    size = size + 1;
    for(i=size-1;i>=pos;i--){
        arr[i] = arr[i-1];
        if(i==pos){
          arr[pos] = number;
            
        }
        
    }
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
int main(void) {
	// your code goes here
	int arr[] = {2,3,5,6,7,10,14,17,20};
	int  size = sizeof(arr)/sizeof(arr[0]);
	insertElem(arr,size,9);
	return 0;
}*/

#include<stdio.h>
//a program in C to insert New value in the array (unsorted list )
void insertValueAtPos(int arr[],int size,int index,int value){
    int i;
    size++;
    for(i=size-1;i>=index;i--){
        arr[i] = arr[i-1];
        if(i == index){
            arr[index] = value;
            
        }
    }
    
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}

int main(){
    int arr[] = {45,23,15,6,32,78,21,89,54};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertValueAtPos(arr,size,4,66);
}