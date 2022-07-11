// #include <stdio.h>

// int main(void) {
// 	// your code goes here
// 	int y = 15;
// 	int *x = &y;
// 	printf("address of Y is %d\n",&y);
	
// 	printf("value of x is %d\n",x);
// 	printf("value pointed by x is %d\n",*x);
// 	printf("value of x is %d\n",&x);
// // 	printf("address of y is %x\n",*(&y));
	
// 	y = 10;
// 	printf("after changing value of y is %d\n",y);
// 	printf("after changing value pointed by x is %d\n",*x);
	
// 	*x = 100;
// 	printf("after changing value of y is %d\n",y);
// 	printf("after changing value pointed by x is %d\n",*x);
	
// 	int z = 15;
// 	int *ptr = &z;
// 	int t = *ptr + *x;
// 	printf("addition  is %d\n",t);
// 	return 0;
// }

// addition using call by reference

#include<stdio.h>

int sum(int *ptr,int *p){
    int sum = *ptr + *p;
    return sum;
}
int main(){
    int x = 10;
    int y=15;
    // int *ptr = &x;
    // int *p = &y;
    int ans = sum(&x,&y);
    printf("sum is %d",ans);
}