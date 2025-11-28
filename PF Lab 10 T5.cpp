#include<stdio.h>

struct team {
	char name[50];
	char sport[30];
	char players[20];
};

struct player {
	char name[50];
	int age;
	int position;
};

void addp(struct player p[], int *count){
	getchar();
	printf("Enter the name of player :");
	scanf("%[^\n]" ,p[*count].name);
	
	
	printf("Enter the age of palyer :");
	scanf("%d" ,&p[*count].age);
	printf("Enter the position of player :");
	scanf("%d" ,&p[*count].position);
	(*count)++;
}

void search(struct player p[], int count){
    int pos;
    int found = 0;

    printf("Enter the position of player you want to find :");
    scanf("%d" ,&pos);

    for(int i = 0; i < count; i++){
        if(p[i].position == pos){
            if(found == 0){
			
                printf("Players at position %d:\n", pos);
            }
            printf("Name : %s\n", p[i].name);
            printf("Age : %d\n", p[i].age);
            printf("Position : %d\n\n", p[i].position);
            found = 1;
            
        }
    }

    if(found == 0){
        printf("No player found.\n");
    }
}


void display(struct team t, struct player p[], int count){
	printf("---Team Details---\n");
	printf("Team Name: %s \nSport: %s\n" ,t.name, t.sport);
	printf("Players:\n");
	for (int i=0; i<count; i++){
		printf("%d) %s - Age %d - Position %d\n",i+1, p[i].name, p[i].age, p[i].position);
	}
	
}

int main (){
	struct team t;
	struct player p[20];
	int ch;
	int count =0;
	
	printf("Enter team name: ");
	scanf("%[^\n]" ,t.name);
	getchar();
	printf("Enter sport name: ");
	scanf("%[^\n]", t.sport);
	
	do{
		printf("\n~~~Team menu~~~");
		printf("\nEnter your choice :");
		printf("\npress 1 to add player :");
		printf("\nPress 2 to search player by poition :");
		printf("\nPress 3 to display team details:");
		printf("\nPress 4 to exit\n");
		scanf("%d" ,&ch);
		
		switch(ch){
			case 1:
				addp(p, &count );
				printf("Player added succesfully.");
				break;
			case 2:
				search(p, count);
		        break;
		    case 3:
		    	
			    display(t, p, count);
			    break;
			case 4:
			    printf("Exiting...\n");
				printf("-----Thank You-----"); 
				break;
			default:
			    printf("Invalid choice!\n");
				 
			      	    
		}
	}while (ch!= 4);
	return 0;
}
