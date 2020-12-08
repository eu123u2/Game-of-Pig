/*Ezigbo Ugochukwu 11/12/2020 Assignment #19 Game of pig*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main (void)
{
	/*Declare variables*/
	int turn_score, dice, turn, total_score;
	char yes_or_no;
	srand((unsigned)time(NULL));
	
	/*Initialize*/
	total_score = 0;
	turn = 1;
	
	while(turn<6)
	{
		printf("Turn %d \n", turn);
		turn++;

		/*Initialize*/
		yes_or_no = 'y';
		turn_score = 0;
	
		while(yes_or_no == 'y')
		{
			dice = rand()%6+1;
			printf("The roll is %d \n", dice);
		
			if(dice == 1)
			{
				turn_score = 0;
				break;
			}
		
			turn_score = turn_score + dice;
			printf("Roll again? ");
			scanf(" %c", &yes_or_no);
		
			while(yes_or_no!='y' && yes_or_no!='n')
			{
				printf("Invalid input. Enter y for yes or n for no. \n");
				printf("Roll again? ");
				scanf(" %c", &yes_or_no);
			}
		}
		
		printf("Your total for this turn is %d \n", turn_score);
		total_score = total_score + turn_score;
	}
	
	/*Display*/
	printf("Thats the end of the game. \n");
	if(total_score<25)
		printf("Your score was %d, a poor score. \n", total_score);
	else
		printf("Your score was %d, a superior score. \n", total_score);
	return 0;
}
