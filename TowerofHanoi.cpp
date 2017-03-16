#include<stdio.h>

void ToH(int,char,char,char);//Declaring the recursive function

int main(void){
	int n;
	printf("enter the no. of tiles/disks:");
	scanf("%d",&n);
	printf("The moves to solve Tower of Hanoi are:\n");
	ToH(n,'a','b','c');//Calling the function from main
	return 0;
}

void ToH(int n,char begin,char aux,char end){
	if (n == 1){
		printf("%c -->>%c\n",begin,end);//if only 1 disk is present then move it to the last
	}
	else{    //rules of tower of hanoi
	         //recursive calling of the function
		ToH(n-1,begin,end,aux);
		ToH(1,begin,aux,end);
		ToH(n-1,aux,begin,end);
	}
	//end
}
