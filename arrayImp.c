//code is written in codechef online ide, now pushing to github
#include <stdio.h>

void countElement(int arr[],int size){
    int freq[size];int i = 0;
    for(i = 0;i<size;i++){
        freq[i] = -1;
    }
    int j = 0,count = 1;
    for(i = 0;i<size;i++){
        for(j = i + 1;j<size;j++){
            if(arr[i] == arr[j]){
                count++;
                arr[j] = 0;
            }
        }
        if(arr[i] != 0){
            printf("%d occurs %d times\n",arr[i],count);
        }
        if(arr[i] != 0 && count%2 == 0){
            printf("%d ocuurs even no of time\n",arr[i]);
        }
        if(arr[i] != 0 && count>=5){
            printf("%d is the majority element\n",arr[i]);
        }
        
        count = 1;
    }
    printf("Now the array is---------\n");
    for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}
int main(void) {
	// your code goes here
	int arr[] = {4,7,2,1,8,4,3,2,6,14,4};
	int arr2[] = {3,4,3,1,3,4,3,2,3,14,5};
	int size = sizeof(arr2)/sizeof(arr2[0]);
	countElement(arr2,size);
	return 0;
}

