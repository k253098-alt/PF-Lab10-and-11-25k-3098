#include<stdio.h>
#include<string.h>

int countv(char *str){
	if(*str == '\0'){
		return 0;
	}
	int count = (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') ? 1 : 0;
	return count + countv(str +1);
}

int main(){
	char str[50];
	int count = 0;
	printf("Enter the string  :\n");
	fgets(str, sizeof(str), stdin);
	
	int vowels = countv(str);
	printf("Number of vowels : %d\n" ,vowels);
	
	return 0;
}