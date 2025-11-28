#include<stdio.h>
#include<string.h>
int main (){
	int a,b;
	
	printf("Enter the number of rows and columns of array:\n");
	scanf("%d %d", &a, &b);
	getchar();
	char arr[a][b+1];
	char word[b+1];
	
	printf("Enter the elements of array :\n");
	for(int i=0; i<a; i++){
		fgets(arr[i], b+1, stdin);
		arr[i][strcspn(arr[i], "\n")] = '\0';
	}
	
	printf("Enter the word to search :\n");
	fgets(word, b+1, stdin);
	word[strcspn(word, "\n")] = '\0';
	
	for(int j=0; j<a; j++){
		if(strcmp(arr[j], word) == 0){
			printf("found"); break;
		}
		else {
			printf("Not found");
			
		}
	}
	return 0;
}