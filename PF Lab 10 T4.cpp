#include<stdio.h>
#include<string.h>

struct movies{
	char title[50];
	char genre[50];
	char director[20];
	int releaseyear;
    float rating;
};

void addmovie(struct movies m[], int *count){
	printf("Enter movie title :\n");
	scanf("%[^\n]",m[*count].title);
	printf("Enter movie genre :\n");
	scanf("%[^\n]",m[*count].genre);
	printf("Enter movie director :\n");
	scanf("%[^\n]",m[*count].director);
	printf("Entere movie release year :\n");
	scanf("%d",&m[*count].releaseyear);
	printf("Enter movie ratings :\n");
	scanf("%f",&m[*count].rating);
	
	count++;
	printf("Movie added succesfully");
	
}

void searchmovie(struct movies m[], int count){
    char search[50];
    int found =0;
    printf("Enter the movie genre to search :\n");
    scanf("%[^\n]", search);
    
    printf("Movies found in genre %s are :" ,search);
    
    for(int i=0; i<count; i++){
    	if(strcmp (m[i].genre, search)==0){
    		printf("\nTitle: %s\n" ,m[i].title);
    		printf("Director: %s\n" ,m[i].director);
    		printf("Release Year: %d\n" ,m[i].releaseyear);
    		printf("Ratings: %.2f\n" ,m[i].rating);
    		found = 1;
		}
	
	}
	if (!found){
		printf("No movies found for this genre.\n");
	}
}	

void displaymovie(struct movies m[], int count){
	if(count==0){
		printf("No movie is added yet.\n");
		return ;
	}
	printf("--All movies display--");
	for(int j=0; j<count; j++){
		printf("\nMovie %d:\n", j + 1);
        printf("Title: %s\n", m[j].title);
        printf("Genre: %s\n", m[j].genre);
        printf("Director: %s\n", m[j].director);
        printf("Release Year: %d\n", m[j].releaseyear);
        printf("Rating: %.1f\n", m[j].rating);
	}
}
	

int main(){
	struct movies m[50];
	int choice;
	int count =0;
	
 do{
	
	printf("----Movie menu----\n");
	printf("press:\n");
	printf("1. To add new movie :\n");
	printf("2. To serach a movie by genre :\n");
	printf("3. To display all movies :\n");
	printf("4. To exit :\n");
	printf("Enter your choice :\n");
	scanf("%d", &choice);
	switch (choice){
		case 1:
			addmovie(m, &count);
		break;	
		case 2:
			searchmovie(m, count);
		break;
		case 3:
		   displaymovie(m, count);
		break;
		case 4:
			printf("Exiting...");
			printf("------Thank you-----");
		break;	
		default:
		{
			printf("Invalid choice!\n");
			break;
		}   	
	}
 } while (choice != 4);
 return 0; 
}