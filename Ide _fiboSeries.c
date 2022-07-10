#include <stdio.h>

void fiboSeries(int n){
    int first = 0,second = 1,third = 0;
    for(int i=1;i<n;i++){
        printf("%d\t",third);
        third = first+second;
        first = second;
        second = third;
    }
}
int main(void) {
	// your code goes here
	fiboSeries(10);
	return 0;
}

