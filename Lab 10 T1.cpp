#include<stdio.h>
int add(int n){
	if(n==0)
		return 0;
		
	 return (n%10) + add(n/10);
	

}
int main (){
	int n;
	int sum;
	
	printf("Enter the number :");
	scanf("%d",&n);

	sum = add(n);
	printf("Sum = %d " ,sum);
	
	return 0;
}

