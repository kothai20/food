#include<stdio.h>
int main()
{
	int choice;
	printf("enter choice: 1 to 5");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Food item:French Fries \n" "Rs.99");
			break;
		case 2:
			printf("Food item:Burger \n" "Rs.129");
			break;
		case 3:
			printf("Food item:Sandwich \n" "Rs.149");
			break;
		case 4:
			printf("Food item:Pasta \n" "Rs.179");
			break;
		case 5:
			printf("Food item:Pizza \n" "Rs.239");
			break;
		default:
			printf("enter a valid choice");
	}
}
	

