#include<stdio.h>
#include<string.h>

struct flightinfo{
	int flightnum;
	char depcity[30];
	char descity[30];
	char date[20];
	int availseats;
		
};

void displayflight(struct flightinfo f){
	printf("--------Flight details-------\n");
	printf("Flight number     = %d\n" ,f.flightnum);
	printf("Departure city    = %s\n",f.depcity);
	printf("Destination city  = %s\n",f.descity);
	printf("Date              = %s\n" ,f.date);
	printf("Available seats   = %d\n" ,f.availseats);
	printf("-------------------------------");
}
	
void seatbook(struct flightinfo *f){
	if(f->availseats > 0){
		f-> availseats--;
		printf("Seat booked succesfully.");
		printf("Remaining seats are %d\n" ,f->availseats);
	}else{
		printf("SORRY! All seats are filled.");
	}
}	
	
int main(){
	struct flightinfo f;
	int choice;
	
	printf("Enter the flight number :");
	scanf("%d" ,&f.flightnum);
	printf("Enter the departure city :");
	scanf("%s",f.depcity);
	printf("Enter the destination city :");
	scanf("%s",f.descity);
	printf("Enter the date of flight (dd/mm/yyyy) :");
	scanf("%s" ,f.date);
	printf("Enter the number of available seats :");
	scanf("%d",&f.availseats);
	
	do{
		printf("~~~Flight Menu~~~\n");
		printf("press: \n");
		printf("1. For flight details\n");
		printf("2. For Seat book\n");
		printf("3. For exit menu\n");
		printf("Enter your choice\n");
		scanf("%d" ,&choice);
		
		switch(choice){
			case 1:
				displayflight(f);
				break;
			case 2:
			    seatbook(&f);
				break;	
			case 3:
			    printf("Exiting...\n");
				printf("~~Thank you~~\n");
				break;
			default:
		        printf("Invalid choice.\n");
         	           			
		}
	}while(choice != 3);
	
	return 0;
}