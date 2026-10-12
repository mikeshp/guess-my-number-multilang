#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "game.h"

void playTheGame(void)
{
	const int INPUT_SIZE = 8;

	bool playAgain = true;
	int  secretNumber;
	char userInput[INPUT_SIZE];
	int  userGuess;

	while (playAgain)
	{
		secretNumber = (rand()%10) + 1;

		while (userGuess != secretNumber)
		{
			printf("DEBUG: secret number = %d\n",secretNumber);
			printf(">  Enter your guess: ");
			fgets(userInput,INPUT_SIZE,stdin);

			userGuess = atoi(userInput);

			if (userGuess > secretNumber)
			{
				printf("Too high!\n");
			}
			if (userGuess < secretNumber)
			{
				printf("Too low!\n");
			}
		}

		printf("You win!\n");

		printf(">  Want to play again? (Y/n) ");
		fgets(userInput,INPUT_SIZE,stdin);

		switch (toupper(userInput[0]))
		{
			case 'Y':
				playAgain = true;
				break;
			default:
				playAgain = false;
		}
	}
}




















//#include <stdio.h>
//
//#include "functions.h"
//#include "game.h"
//
//#define MAX_ATTEMPTS 5
//#define INITIAL_SCORE 10
//
//extern int max_score;
//extern const int TAB;
//extern const char* PROMPT;
//
//void play_game(int magic_number)
//{
//	int user_guess;
//	int wrong_input;
//	int wrong_guess;
//	int attempts_left;
//	int current_score;
//	int have_won;
//
//	wrong_guess   = 0;
//	current_score = INITIAL_SCORE;
//	attempts_left = MAX_ATTEMPTS;
//	have_won      = 0;
//
//	while (attempts_left > 0)
//	{
//		wrong_input = 0;
//		user_guess  = 0;
//
//		while(!(user_guess >= 1 && user_guess <= 9))
//		{
//			clear_screen();
//
//			display_header(max_score);
//			display_game_menu(current_score,attempts_left);
//			prompt_game_menu(wrong_input,wrong_guess);
//
//			scanf(" %d", &user_guess);
//			clear_buffer();
//
//			wrong_guess = 0;
//			wrong_input = 1;
//		}
//
//		attempts_left--;
//
//		if (user_guess == magic_number)
//		{
//			current_score += 5;
//			have_won = 1;
//			break;
//		}
//		else
//		{
////			printf("No, it isn't %d! %s\n",user_guess,
////			attempts_left > 0 ? "Try again..." : "How sad.");
//			current_score = current_score <= 0 ?
//			0 : current_score - 1;
//			wrong_guess = 1;
//			continue;
//		}
//	}
//
//	if (current_score > max_score)
//	{
//		max_score = current_score;
//	}
//
//	clear_screen();
//	display_header(max_score);
//	display_game_menu(current_score,attempts_left);
//
//	if (have_won)
//	{
//		printf("Fascinating! (+5 scores)\n");
//		printf("You managed to guess the number %d ",magic_number);
//		printf("in only %d attempts!\n",MAX_ATTEMPTS - attempts_left);
//	}
//	else
//	{
//		printf("Unfortunatelly, ");
//		printf("you couldn't guess the magic number.\n");
//		printf("It was %d by the way...\n",magic_number);
//	}
//
////	printf("Your max score is now %d.\n",max_score);
//
//	printf("\n");
//	printf("Press <Enter> to continue...\n");
//	printf("> ");
//
//	while (getchar() != '\n')
//	{
//		clear_buffer();
//	}
//}
//
//void quit_game(int max_score)
//{
//	printf("%*sYour maximum score: %3.2d\n",TAB,"",max_score);
//	printf("%*sGoodbye!\n",TAB,"");
//	printf("\n");
//}
