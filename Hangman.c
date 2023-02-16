//C-program to develop Hangman game
#include<stdio.h>
#include<string.h>
void introduction(char[], char[], int, int);          //Declaration of different functions for different operations
void choice1(char[], char[], char, char, int, int);
void choice2(char[], char[], char, char, int, int);
void choice3(char[], char[], char, char, int, int);
void choice4(char[], char[], char, char, int, int);
void choice5(char[], char[], char, char, int, int);
void main()
{
	char word[50] = { "sd" }, b[100] = { "ds" }, d = 'f', ch = 's';
	int ans = 0, index = 0, c = 0;
	introduction(word, b, c, index);      //main function calls "introduction" function to start the game        
}
void introduction(char word[50], char b[100], int c, int index)  //function definition
{
	int flag = 0, choice, k = 0;  FILE* fp1; //declaration of file pointer to access a document
	char ch = 'a', d = '_', val;
	fp1 = fopen("hangman.txt", "r");
	val = fgetc(fp1);     //reads the document named "hangman" and prints whatever is written in it
	while (val != EOF)
	{
		putchar(val);
		val = fgetc(fp1);
	}
m:printf("\n\n\tSelect any one of the theme above and enter the serial number of that theme: ");
	scanf_s("%d", &choice);//compiler takes the serial number entered by the user
	switch (choice)//compares the entered serial number with different numbers
	{
	case 1:choice1(word, b, d, ch, c, index);//conditions will be checked based on the number entered by the userand corresponding function will be called
		break;
	case 2:choice2(word, b, d, ch, c, index);
		break;
	case 3:choice3(word, b, d, ch, c, index);
		break;
	case 4:choice4(word, b, d, ch, c, index);
		break;
	case 5:choice5(word, b, d, ch, c, index);
		break;
	default:printf("\n\tEnter the correct serial number");//when none of the cases match, it will return default statement
		goto m;  //goes back to line number 31 and repeats the process
	}
}
void choice1(char word[50], char b[100], char d, char ch, int c, int index)
{
	char a[10][20] = { {"uzbekistan"},{"norway"},{"denmark"},{"nigeria"},{"zimbabwe"},{"kenya"},{"israel"},{"senegal"},{"croatia"},{"ireland"} };
	int flag = 0, i, k = 0; char y[10];
	index = rand() % 10; //random initialisation of words
	strcpy(word, a[index]);
	c = strlen(word); //to check the number of letters in the word
	printf("\n\tYou have chosen option 1 that is 'country names' so you have to guess the name of a country..All the best");
	printf("\n\n\n");
	printf("\t");
	for (i = 0; i < c; i++)
	{
		printf("%c ", d);//to print number of dashes based on the length of the word
		b[i] = d;
	}
	b[i] = '\0';
	while (1)
	{
		flag = 0;
		printf("\n\n\tEnter a letter : ");
		getchar();
		scanf("%c", &ch);
		printf("\n\n");
		for (i = 0; i < c; i++)
		{
			if (tolower(ch) == word[i])  //checks for the entered letter in the word
			{
				b[i] = word[i]; //dashes will be replaced by the entered letter if the condition is true
				flag = 1;
			}
		}
		printf("\t");
		for (i = 0; i < c; i++)
		{
			printf("%c ", b[i]);
		}
		if (flag != 0)
		{
			printf("\n\n\tYou are correct!!keep going");
		}
		else
		{
			k++;
			printf("\n\n\t'%c' is a wrong guess,try again", ch);
			printf("\n\tYou have %d more guesses\n\n", 7 - k);
			if ((7 - k) == 0)   //after losing all the seven lives you will lose
			{
				printf("\n\tSORRY YOU ARE HANGED\n");
				printf("\tThe word was '%s'\n", word);
				break;
			}
		}
		if (strcmp(word, b) == 0)
		{
			break;
		}
	}
	if (strcmp(word, b) == 0)  //compares the guessed word with the initial word
	{
		printf("\n\n\tCONGRATULATIONS YOU WON!!!\n");
	}
	printf("\n\tWant to play again?(yes or no):");
	scanf("%s", y);//takes user input that is "yes" or "no"
	if (strcmp(y, "yes") == 0)//if the input is "yes"
	{
		k = 0;
		introduction(word, b, c, index); //"introduction function will be called in order to restart the game
	}
	else if (strcmp(y, "no") == 0)//if the input is "no"
	{
		printf("\n\tThank You\n");//game is over
	}
}
void choice2(char word[50], char b[100], char d, char ch, int c, int index)
{

	int flag = 0, i, k = 0; char y[10];
	char e[10][20] = { {"fanta"},{"skechers"},{"fila"},{"adidas"},{"reebok"},{"gucci"},{"allensolly"},{"dune"},{"nautica"},{"starbucks"} };
	index = rand() % 10;
	strcpy(word, e[index]);
	c = strlen(word);
	printf("\n\tYou have chosen option 2 that is 'brand names' so you have to guess the name of a brand..All the best");
	printf("\n\n\n");
	printf("\t");
	for (i = 0; i < c; i++)
	{
		printf("%c ", d);
		b[i] = d;
	}
	b[i] = '\0';
	while (1)
	{
		flag = 0;
		printf("\n\n\tEnter a letter : ");
		getchar();
		scanf("%c", &ch);
		printf("\n\n");
		for (i = 0; i < c; i++)
		{
			if (tolower(ch) == word[i])
			{
				b[i] = word[i];
				flag = 1;
			}
		}
		printf("\t");
		for (i = 0; i < c; i++)
		{
			printf("%c ", b[i]);
		}
		if (flag != 0)
		{
			printf("\n\n\tYou are correct!!keep going");
		}
		else
		{
			k++;
			printf("\n\n\t'%c' is a wrong guess,try again", ch);
			printf("\n\tYou have %d more guesses\n\n", 7 - k);
			if ((7 - k) == 0)
			{
				printf("\n\tSORRY YOU ARE HANGED\n");
				printf("\tThe word was '%s'\n", word);
				break;
			}
		}
		if (strcmp(word, b) == 0)
		{
			break;
		}
	}
	if (strcmp(word, b) == 0)
	{
		printf("\n\n\tCONGRATULATIONS YOU WON!!!\n");
	}
	printf("\n\tWant to play again?(yes or no):");
	scanf("%s", y);
	if (strcmp(y, "yes") == 0)
	{
		k = 0;
		introduction(word, b, c, index);
	}
	else if (strcmp(y, "no") == 0)
	{
		printf("\n\tThank You\n");
	}
}
void choice3(char word[50], char b[100], char d, char ch, int c, int index)
{

	int flag = 0, i, k = 0; char y[10];
	char f[10][20] = { {"abdulkalam"},{"latamangeshkar"},{"sachintendulkar"},{"bhagatsingh"},{"elonmusk"},{"jeffbezos"},{"joebiden"},{"usainbolt"},{"markzuckerberg"},{"nelsonmandela"} };
	index = rand() % 10;
	strcpy(word, f[index]);
	c = strlen(word);
	printf("\n\tYou have chosen option 3 that is 'Famous personality names' so you have to guess the name of a famous personality..All the best");
	printf("\n\n\n");
	printf("\t");
	for (i = 0; i < c; i++)
	{
		printf("%c ", d);
		b[i] = d;
	}
	b[i] = '\0';
	while (1)
	{
		flag = 0;
		printf("\n\n\tEnter a letter : ");
		getchar();
		scanf("%c", &ch);
		printf("\n\n");
		for (i = 0; i < c; i++)
		{
			if (tolower(ch) == word[i])
			{
				b[i] = word[i];
				flag = 1;
			}
		}
		printf("\t");
		for (i = 0; i < c; i++)
		{
			printf("%c ", b[i]);
		}
		if (flag != 0)
		{
			printf("\n\n\tYou are correct!!keep going");
		}
		else
		{
			k++;
			printf("\n\n\t'%c' is a wrong guess,try again", ch);
			printf("\n\tYou have %d more guesses\n\n", 7 - k);
			if ((7 - k) == 0)
			{
				printf("\n\tSORRY YOU ARE HANGED\n");
				printf("\tThe word was '%s'\n", word);
				break;
			}
		}
		if (strcmp(word, b) == 0)
		{
			break;
		}
	}
	if (strcmp(word, b) == 0)
	{
		printf("\n\n\tCONGRATULATIONS YOU WON!!!\n");
	}
	printf("\n\tWant to play again?(yes or no):");
	scanf("%s", y);
	if (strcmp(y, "yes") == 0)
	{
		k = 0;
		introduction(word, b, c, index);
	}
	else if (strcmp(y, "no") == 0)
	{
		printf("\n\tThank You\n");
	}
}
void choice4(char word[50], char b[100], char d, char ch, int c, int index)
{

	int flag = 0, i, k = 0; char y[10];
	char t[10][20] = { {"inception"},{"avatar"},{"nemo"},{"shrek"},{"cars"},{"spectre"},{"skyfall"},{"johnnyenglish"},{"terminator"},{"starwars"} };
	index = rand() % 10;
	strcpy(word, t[index]);
	c = strlen(word);
	printf("\n\tYou have chosen option 4 that is 'movie names' so you have to guess the name of a movie..All the best");
	printf("\n\n\n");
	printf("\t");
	for (i = 0; i < c; i++)
	{
		printf("%c ", d);
		b[i] = d;
	}
	b[i] = '\0';
	while (1)
	{
		flag = 0;
		printf("\n\n\tEnter a letter : ");
		getchar();
		scanf("%c", &ch);
		printf("\n\n");
		for (i = 0; i < c; i++)
		{
			if (tolower(ch) == word[i])
			{
				b[i] = word[i];
				flag = 1;
			}
		}
		printf("\t");
		for (i = 0; i < c; i++)
		{
			printf("%c ", b[i]);
		}
		if (flag != 0)
		{
			printf("\n\n\tYou are correct!!keep going");
		}
		else
		{
			k++;
			printf("\n\n\t'%c' is a wrong guess,try again", ch);
			printf("\n\tYou have %d more guesses\n\n", 7 - k);
			if ((7 - k) == 0)
			{
				printf("\n\tSORRY YOU ARE HANGED\n");
				printf("\tThe word was '%s'\n", word);
				break;
			}
		}
		if (strcmp(word, b) == 0)
		{
			break;
		}
	}
	if (strcmp(word, b) == 0)
	{
		printf("\n\n\tCONGRATULATIONS YOU WON!!!\n");
	}
	printf("\n\tWant to play again?(yes or no):");
	scanf("%s", y);
	if (strcmp(y, "yes") == 0)
	{
		k = 0;
		introduction(word, b, c, index);
	}
	else if (strcmp(y, "no") == 0)
	{
		printf("\n\tThank You\n");
	}
}
void choice5(char word[50], char b[100], char d, char ch, int c, int index)
{
	int flag = 0, i, k = 0; char y[10];
	char u[10][20] = { {"mindtree"},{"justdial"},{"urbanclap"},{"foodpanda"},{"wipro"},{"huawei"},{"yokohama"},{"tinder"},{"intel"},{"cisco"} };
	index = rand() % 10;
	strcpy(word, u[index]);
	c = strlen(word);
	printf("\n\tYou have chosen option 5 that is 'company names' so you have to guess the name of a company..All the best");
	printf("\n\n\n");
	printf("\t");
	for (i = 0; i < c; i++)
	{
		printf("%c ", d);
		b[i] = d;
	}
	b[i] = '\0';
	while (1)
	{
		flag = 0;
		printf("\n\n\tEnter a letter : ");
		getchar();
		scanf("%c", &ch);
		printf("\n\n");
		for (i = 0; i < c; i++)
		{
			if (tolower(ch) == word[i])
			{
				b[i] = word[i];
				flag = 1;
			}
		}
		printf("\t");
		for (i = 0; i < c; i++)
		{
			printf("%c ", b[i]);
		}
		if (flag != 0)
		{
			printf("\n\n\tYou are correct!!keep going");
		}
		else
		{
			k++;
			printf("\n\n\t'%c' is a wrong guess,try again", ch);
			printf("\n\tYou have %d more guesses\n\n", 7 - k);
			if ((7 - k) == 0)
			{
				printf("\n\tSORRY YOU ARE HANGED\n");
				printf("\tThe word was '%s'\n", word);
				break;
			}
		}
		if (strcmp(word, b) == 0)
		{
			break;
		}
	}
	if (strcmp(word, b) == 0)
	{
		printf("\n\n\tCONGRATULATIONS YOU WON!!!\n");
	}
	printf("\n\tWant to play again?(yes or no):");
	scanf("%s", y);
	if (strcmp(y, "yes") == 0)
	{
		k = 0;
		introduction(word, b, c, index);
	}
	else if (strcmp(y, "no") == 0)
	{
		printf("\n\tThank You\n");
	}
}