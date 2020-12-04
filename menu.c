#include<stdio.h>
main()
{
	int food_item = 0;
	printf("Enter a number from 1 to 5:  \n1. Pizza @239/-\n2. Burger @129/-\n3. Pasta @173/- \n4. French fries @99/-\n5. Sandwich @149/-");
	scanf("%d", &food_item);
	switch(food_item)
	{
		case 1 :
			printf("Pizza @239/-");
			break;
		case 2:
			printf("Burger @129/-");
			break;
		case 3:
			printf("Pasta @173/- ");
			break;
		case 4:
			printf("French fries @99/-");
			break;
		case 5 :
			printf("Sandwich @149/-");
			break;
	}
}
