#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>
void eltoro(void)
	{
		system("CLS");
		
			printf("\n\n\n\t\t                MM                                           MM                 \n");
			printf("\t\t             DMMM                                             DMMM              \n");
			printf("\t\t           MMMM                                                 MMMM            \n");
			printf("\t\t        .MMMMM                                                   MMMMM          \n");
			printf("\t\t       MMMMMZ                                                     =MMMMM        \n");
			printf("\t\t     MMMMMM~                                                        MMMMMM      \n");
			printf("\t\t    MMMMMMM                                                         OMMMMMM     \n");
			printf("\t\t  OMMMMMMM                                                           MMMMMMMM   \n");
			printf("\t\t ZMMMMMMMM                                                           MMMMMMMMN  \n");
			printf("\t\t.MMMMMMMMM                                                           MMMMMMMMM= \n");
			printf("\t\tMMMMMMMMMMO                            M~                            MMMMMMMMMM \n");
			printf("\t\tMMMMMMMMMMMM                         MMMMM.                        MMMMMMMMMMMM.\n");
			printf("\t\tMMNMMMMMMMMMMMN.                  ?MMMMMMMMMM..                 8MMMMMMMMMMMMMMN\n");
			printf("\t\tMM8MMMMMMMMMMMMMMMMMMM8OMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM78MMMMMMMMMMMMMMMMMMMMMM,\n");
			printf("\t\tMMMIMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM \n");
			printf("\t\t MMM+MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMZMM: \n");
			printf("\t\t  MMM.MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM,MMM=  \n");
			printf("\t\t   MMMM.OMMMMMMMMMMMMMMMDMMMMMMMMMMMMMMMMMMMMMMMMMMMMM8MMMMMMMMMMMMMMMM.DMMM \n");
			printf("\t\t     MMMMM..DMMMMMMMM MMMMMMMMMMMMMM7MMMMMMMMMMMMMMMMMMMM.MMMMMMMMM: 7MMMM\n");
			printf("\t\t       MMMMMMMO  . M .MMMMMMMMMMMMMMMOMMM=MMMMMMMMMMDMMMM .MI...=MMMMMMM  \n");
			printf("\t\t           MMMMMMMMM..?MMMMM:MMMMMMMMMMMMMMMMMMMMM$MMMMMM..MMMMMMMMM,  \n");
			printf("\t\t                      MMMM 8MM=MMMMMMMMMMMMMMMMM MMM.DMMM                       \n");
			printf("\t\t                     .MMMM... 8M:MMMMMMMMMMMMM MM .. MMMMD \n");
			printf("\t\t                     MMMMM ....ZMMMMMMMMMMMMM7MM.... MMMMM \n");
			printf("\t\t                     MMMMMM.....MMMMMMMMMMMMMMM.....MMMMMMD\n");
			printf("\t\t                    7MMMMMMMMMM=MMMMMMMMMMMMMMM.MMMMMMMMMMM\n");
			printf("\t\t                    ,MMMMMMMMMMMMZMMMMMMMMMMM7MMMMMMMMMMMMM \n");
			printf("\t\t                     MMMM,MMMMMMMMMMMMMMMMMMM:MMMMMMMOMMMM\n");
			printf("\t\t                      MMMMMMMMMMMMNMMMMMMMMMMMMMMMMMZMMMN \n");
			printf("\t\t                        MMMMZMMMMM:MMMMMMMMM,MMMMM:MMMMM\n");
			printf("\t\t                         MMMMM,MMMMMMMMMMMMMOMMM.MMMMM\n");
			printf("\t\t                           MMMMMMMMMMMMMMMMMMMMMMMMM\n");
			printf("\t\t                             MMMMM7MMMMMMMMMZMMMMM \n");
			printf("\t\t                              NMMMMMMMMMMMMMMMMMM.   \n");
			printf("\t\t                              MMM.., MMMMM .   MMN \n");
			printf("\t\t                             MMM. MMM.MMM=MMMN.MMM \n");
			printf("\t\t                              MM$.MMMMMMMMMMMI.MMI\n");
			printf("\t\t                               MMD.  .MMMM .. MM.\n");
			printf("\t\t                                 MMM?..MO. MMM  .\n");
			printf("\t\t                                  8..MMMMM.. ..\n");
			printf("\t\t                                  MMMMMMMMMMM7\n");
			printf("\t\t                                  =N.......:N \n");

		printf("\n\n\n");
	}


void header(void)
	{
		system("CLS");
		printf("\n\n\n");
		printf("--------------------------------------------------------------------------------------------------------------\n\n");
		printf("\t\t\t\tH I D D E N   N U M B E R  : # # # #\n\n\n");
		printf("--------------------------------------------------------------------------------------------------------------\n\n\n");

	}

void rules()
{
    printf("\n\n\n");
    printf("\t\t\t\t------ C O W S   &   B U L L  S ------\n\n\n");
    printf("\t One player, the Chooser, thinks of a four-digit number and the other player, the Guesser, \n\ttries to guess it. \n\n");
    printf("\t At each turn the Guesser tries a four digit number, and the Chooser says how close it is \n\tto the answer by giving: \n\n\n");

    printf("\t * The number of Bulls - digits correct in the right position. \n\n");
    printf("\t * The number of Cows - digits correct but in the wrong position. \n\n\n\n");

    printf("\t The Guesser tries to guess the answer in the fewest number of turns. \n");
    printf("\t If either number has repeated digits the rule is that each digit can only count towards \n\tthe score once, and Bulls are counted before Cows.\n\n");
    printf("    Example  \n\n\n");
    printf("\t For example, if the Chooser has thought of the number 2745 the replies for some guesses \n\tare as follows: \n");
    printf("\t Guess: 1389 - Reply: 0 Bulls, 0 Cows. \n\n");
    printf("\t Guess: 1234 - Reply: 0 Bulls, 2 Cows.\n \n");
    printf("\t Guess: 1759 - Reply: 1 Bull, 1 Cow. \n\n");
    printf("\t Guess: 2745 - Reply: 4 Bulls! \n");
}


void randomNumber(int nums[], int random[])
{
	srand((unsigned)time(NULL));
	int a, b, c, d;

	//random[0]

	a = rand() % 10; //random index
	random[0] = nums[a];
	for (int i = a; i < 10; ++i)
	{
		nums[i] = nums[i + 1]; //deleting the already chosen random number
	}
	//random[1]

	b = rand() % 9; //random index
	random[1] = nums[b];
	for (int i = b; i < 9; ++i)
	{
		nums[i] = nums[i + 1]; //deleting the already chosen random number
	}
	//random[2]

	c = rand() % 8; //random index
	random[2] = nums[c];
	for (int i = c; i < 8; ++i)
	{
		nums[i] = nums[i + 1]; //deleting the already chosen random number
	}
	//random[3]

	d = rand() % 7; //random index
	random[3] = nums[d];
	for (int i = d; i < 7; ++i)
	{
		nums[i] = nums[i + 1]; //deleting the already chosen random number
	}
}

// displaying the number generated by the computer
void hint(int random[])
{
	for (int i = 0; i < 4; ++i)
	{
		printf("%d  ", random[i]);
	}
}

void displayResults(int t1, int t2, int u0, int u1, int u2, int u3)
{
    printf("\n\n\t%d%d%d%d  :  %d Bull(s)  |  %d Cow(s)",u0,u1,u2,u3,t1,t2);
}

//---------------------------------------------------------------------------------
main(void)
{
    system("MODE 110,50");
    eltoro();
    printf("\t\tPress any key to Continue . . .");
	getch();
    system("CLS");
    rules();
    printf("\n\n\n\t\tPress any key to play . . .");
    getch();
    header();
	int random[4]; //random number
	int nums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int user[4];		 //array containing the user's answer
	int ua;				 //user answer
	int d1, d2, d3, d4;  //digits extracted from the user's answer
	int test_b, test_c;  //testing variables for Cows and Bulls
	int x, p, occ, test; //testing variables for user's aswer
    int at=1;

	//--------------------------------------------------------------------

	randomNumber(nums, random); //generating the random number
	//  hint(random);				//printing out the hidden random number

	//-------------------------------------------------------------
	
	do
	{
    printf("\n\n\t----------------------- A T E M PT  %d---------------------\n\n",at);
    printf("\tYour try");

		do
		{
			printf("\n\n\t> ");
			scanf("%d", &ua); //getting the answer from the player

			d1 = (ua / 1000);
			d2 = (ua % 1000) / 100;
			d3 = (ua / 10) % 10;
			d4 = (ua % 10);
			//filling the array with the answer
			user[0] = d1;
			user[1] = d2;
			user[2] = d3;
			user[3] = d4;


			occ = 0;
			test = 1;
			p = 0;
			while ((test == 0) && (p < 4))
			{
				x = user[p];
				for (int i = 0; i < 4; ++i)
				{
					if (user[i] == x)
					{
						occ += 1;
					}
				}

				if (occ == 1) //theres only one copy of the number, which is itself . . .
				{
					test = 1;
				}
				else
				{
					test = 0;
				}
				p += 1;
			}
		} while (test = 0);

		//------testing for Cows and Bulls-----

		test_b = 0;
		test_c = 0;

		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				if (random[i] == user[j])
				{
					if (i == j)
					{
						test_b += 1;
					}
					else
					{
						test_c += 1;
					}
				}
			}
		}

		// printf("\n\nU have %dB and %dC", test_b, test_c);
        displayResults(test_b, test_c,user[0],user[1],user[2],user[3]);
    at+=1;
	} while (test_b != 4); //while the answer has bulls in it (not correct)

    if (test_b == 4)
    {
        system("CLS");
        printf("\n\n\n");
		printf("--------------------------------------------------------------------------------------------------------------\n\n");
		printf("\t\t\t\tH I D D E N   N U M B E R  : %d %d %d %d\n\n\n",random[0], random[1], random[2], random[3]);
		printf("--------------------------------------------------------------------------------------------------------------\n\n\n");
        printf("\tCONGRATS , YOU WIN ! ! ");
        printf("\n\n\tNumber of attempts : %d",at-1);
        
    }
    

	getch();
}
