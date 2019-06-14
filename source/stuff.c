#include <stdio.h>//printf(), scanf()
#include <stdlib.h>//system,atoi()
#include <conio.h>//getch()
#include "stuff.h"//my functions, mainly for "graphics"
#include <string.h>//strlen(),strcmp()
#include <windows.h>
#include <time.h>



void color(int x)
{

	HANDLE hconsole;
	hconsole=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hconsole,x);
}



void error_input(void)
{
	
	color(12);
	printf("\t\t\t\tYour try must be 4 unique digits !\n");
	
}

void hidden(void)
{
	printf("\n\n");
	printf("\t\t\tHIDDEN NUMBER : # # # #\n\n");
	printf("--------------------------------------------------------------------------------\n\n");
}

void you_win(int random[])
{
	system("cls");
			 	hint(random);//prints out secret number chosen by PC
			 	color(11);
			 	printf("\n\n");
				printf("\t\t\tHIDDEN NUMBER : %d %d %d %d\n\n",random[0],random[1],random[2],random[3]);
				color(15);
				printf("--------------------------------------------------------------------------------\n\n\n\n\n");

				color(14);
				printf("\t\t***      ***     ********       ****      ****      \n");
				printf("\t\t ***    ***    ************     ****      ****\n");
				printf("\t\t   *** ***    ***        ***    ****      ****       \n");
				printf("\t\t     ***      ***        ***    ****      ****       \n");
				printf("\t\t     ***      ***        ***    ****      ****         \n");
				printf("\t\t     ***      ***        ***    ****      ****     \n");
				printf("\t\t     ***       ************     **************     \n");
				printf("\t\t     ***        **********      ************** 				\n\n\n");
			
				printf("\t\t ****    ***  ****   ****  ****   ****    ****\n");
				printf("\t\t  ****    *******   ****   ****   ******  ****   \n");
				printf("\t\t    ****   *****   ****    ****   **** ** ****    \n");
				printf("\t\t     ****  *****  ****     ****   ****  ******   \n");
				printf("\t\t       **************      ****   ****   *****   \n");
				printf("\t\t         **********        ****   ****    ****  \n");
				color(15);
}



void keep_score(FILE *f,int attempt)
{
	time_t s;
	struct tm* t;
	s=time(NULL);
	t = localtime(&s);

	f  =fopen("log\\scores.data","a+");//add tail to the file	    
	fprintf(f, "    %d %02d:%02d:%02d\n",attempt , t->tm_hour , t->tm_min , t->tm_sec );//storing score and its time
	fclose(f);
}	 	



void show_score(FILE *f)//dsiplaying latest scores
{
	f = fopen("log\\scores.data","r");
	char line[256];

	printf("\n\n");
	printf("\t");color(12);printf("\t\t     SCORE  |  TIME\n\n");color(15);

	while( fgets(line,100,f) != NULL)//printing scores
	{
		printf("\t\t\t  %s\n",line);
	}

	fclose(f);
}



int best_score(FILE *file)//geting best score in the game
{
	file = fopen("log\\scores.data","r");
	int s=0;//score retrieved from file
	int min=100;

	while( ( fscanf(file,"    %d",&s) != NULL)||(!eof(file)) )
	{		
		if (s < min)
		{
			min = s;
		}
	}

	fclose(file);
	return min;//best score
	
}

void last_score(FILE *file)
{
	file = fopen("log\\scores.data","r");

	char line[30];

	fseek(file,-14,SEEK_END);//i counted the caracters (lol)
	fgets(line,28,file);
	printf("\t\tLast score : "); color(10); printf("%s",line); color(15);

	fclose(file);
}


//function that display , best, last and top10 scores
void scores_function( FILE *file)
{
	

	system("CLS");
	printf("\n\n\n\n");
	color(13);
	printf("\t\t\tS C O R E B O A R D");
	color(15);
	printf("\n\n\n\n\n\n");
	printf("\t\tBest score :  "); color(10); printf("%d",best_score(file)); color(15);
	printf("\n\n\n");
	last_score(file);

	printf("\n\n");
	printf("\t-------------------------------------------------------------------\n\n");
	color(11);
	printf("\t\t\t\tTOP SCORES\n\n");
	color(15);
	show_score(file);
}


void rules(void)
{
	system("CLS");
    printf("\n\n\n");
    color(9);
    printf("\t\t------ C O W S   &   B U L L  S ------\n\n\n\n\n\n");
    color(15);

    printf("    One player, the Chooser(PC), thinks of a four-digit number and the other\n");
    printf("    player, the Guesser,tries to guess it. \n\n");

    printf("    At each turn the Guesser tries a four digit number, and the Chooser(PC)\n");
    printf("    says how close it is to the answer by giving: \n\n\n");



    printf("    * The number of Bulls - digits correct in the right position. \n\n");
    printf("    * The number of Cows  - digits correct but in the wrong position. \n\n\n\n");


    printf("    The Guesser tries to guess the answer in the fewest number of turns. \n\n\n");

    color(10);
    printf("\tExample  \n\n\n");
    color(15);

    printf("    For example, if the Chooser(PC) has thought of the number ");color(6);printf("2745\n");color(15);
    printf("    the replies for some guesses are as follows: \n\n\n\n");

    printf("\t\tGuess: 1389 - Reply: 0 Bulls, 0 Cows. \n\n\n");
    printf("\t\tGuess: 1");color(12);printf("2");color(15);printf("3");color(12);printf("4");color(15);printf(" - Reply: 0 Bulls, 2 Cows.\n\n\n");
    printf("\t\tGuess: 1");color(10);printf("7");color(12);printf("5");color(15);printf("9 - Reply: 1 Bull, 1 Cow. \n\n\n");
    printf("\t\tGuess: ");color(10);printf("2745");color(15);printf(" - Reply: 4 Bulls! \n");
}


void selected(int item,int pos)//used in the main menu
{
	if (item == pos)
	{
		color(10);
	}else
	{
		printf("");
	}
}

