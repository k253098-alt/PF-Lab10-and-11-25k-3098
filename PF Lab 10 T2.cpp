#include<stdio.h>
#include<string.h>
void rev(char str[], int left, int right);
int main(){

    char str[50];
   printf("Enter the string: \n");
   fgets(str, sizeof(str), stdin);
   str[strcspn(str,"\n")] = '\0';

   int length = strlen(str);
   rev(str, 0, length -1);
   printf("Reversed string = %s\n", str);

    return 0;
}

void rev(char str[], int left, int right){
    
    if(left >= right ){
        return ;
    }
    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;

    rev(str, left +1, right -1);


}