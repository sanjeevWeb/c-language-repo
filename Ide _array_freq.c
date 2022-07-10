#include <stdio.h>

//function to find unique elements in an array
void isUnique(int arr[],int size){
    int i = 0,j = 0;
    int dupl[size];
    for(i=0;i<size;i++){
        dupl[i] = -1;
    }
    int mm = 1;
    for(i = 0;i<size;i++){
        for(j = i+1;j<size;j++){
            if(arr[i] == arr[j]){
                dupl[j] = 0;
                mm++;
            }
            //printf("%d occurs %d times\n",dupl[j],mm);
        }
        if(dupl[i] != 0){
            dupl[i] = mm;
        }
        mm = 1;
    }
    int ctr = 0;
    for(i = 0;i<size;i++){
        if(dupl[i] == 1){
            printf("%d\n",arr[i]);
            ctr++;
        }
    }
    printf("totoal unique elements are %d",ctr);
}

void duplicate(int arr[],int size){
    int i = 0,j = 0;
    int count = 0;
    for(i = 0;i<size;i++){
        for(j = i+1;j<size;j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }
    printf("total number of duplicate elements are %d",count);
}
int main(void) {
	// your code goes here
// 	int arr[] = {3,6,45,7,11,9,21,33,72};
	int arr[] = {1,10,20,1, 25, 1, 10, 30, 25, 1};
	int size = sizeof(arr)/sizeof(arr[0]);
// 	isUnique(arr,size);
    duplicate(arr,size);
	return 0;
}

