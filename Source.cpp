/*
James Ford
csc215 
10/10/2021
Create a professor list using arrays and have the user guess a number 1-10 and see if the guess matches a number chosen by a randNum Generator
*/

//establish necessary libriaries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

//claim standard namespace
using namespace std;

//establish variable type being used , in this case it is integers
int main() {

	//declare the user input varible
	int guess;
	
	//set maximum for how many items can be in tthe arrays
	const int maxUATProf = 10;
	const int maxRooms = 18;
	string uatProf[maxUATProf];
	string uatRoom[maxRooms];

	//set the start number of how many items are intially in the arrays
	int numProf = 0;
	int numRoom = 0;

	//Introduction to the tour
	cout << " Hello There! Welcome to UAT! \n";
	cout << " I will Be giving you a tour of Campus, but you first you must meet the Professors. \n";
	cout << " Here is a list of our professors. \n";

	//label the different profeesors in the Professor array
	uatProf[numProf++] = "Matthew Prater";
	uatProf[numProf++] = "Robert Perez";
	uatProf[numProf++] = "Juan Rodriguez";
	uatProf[numProf++] = "Charles Xavier";
	uatProf[numProf++] = "Eric Lencher";
	uatProf[numProf++] = "Logan Wolverain";
	uatProf[numProf++] = "Dr.Bruce Banner";
	uatProf[numProf++] = "Tony Stark";
	uatProf[numProf++] = "Natasha Romanov";
	uatProf[numProf++] = "Thor Odinson";

	//create a for loop so that everything can be displayed in order
	for (int i = 0; i < numProf; ++i)
	{ 
		cout << uatProf[i] << endl;
	}
	 
	//intro to the classrooms
	cout << " They are wonderful instructors, and are all looking forward to meet you \n";
	cout << " Now I will give you the list of cassrooms \n";
	cout << " As a matter of fact, we can play a little game after i show you the list. \n";
	cout << "Here you go! \n";

	// label the different classrooms
	uatRoom[numRoom++] = " Room 108 ";
	uatRoom[numRoom++] = " Room 107 ";
	uatRoom[numRoom++] = " Room 106 ";
	uatRoom[numRoom++] = " The Theatre/ 135 ";
	uatRoom[numRoom++] = " Room 245";
	uatRoom[numRoom++] = " Room 244";
	uatRoom[numRoom++] = " Room 252";
	uatRoom[numRoom++] = " Room 253";
	uatRoom[numRoom++] = " Room 235";
	uatRoom[numRoom++] = " Room 232";
	uatRoom[numRoom++] = " Room 231";
	uatRoom[numRoom++] = " Room 207";
	uatRoom[numRoom++] = " Room 203";
	uatRoom[numRoom++] = " Room 202";
	uatRoom[numRoom++] = " Room 201";
	uatRoom[numRoom++] = " Room 204";
	uatRoom[numRoom++] = " Room 205";
	uatRoom[numRoom++] = " Room 206";

	//create a for loop so that everything can be displayed in order
	for (int i = 0; i < numRoom; ++i)
	{
		cout << uatRoom[i] << endl;
	}

	//telling the user of the guessing software
	cout << "now that the boring part is over! I can showoff \n";
	cout << " Something cool i have learned while being here \n";
	cout << " So I have written some software that will guess a number 1-10 \n";
	cout << "and you have to guess that number, and my software will keep track of how many attempts you take. \n";
	cout << "as well as tell you if you need to guess a number higher or lower than the number you guessed \n";
	cout << "Godspeed!";

	//set intial number for tries/guesses/and atttempts
	int tries = 0;

	//seed the random number generator that bases itself off of the current time
	srand(time(NULL));

	//declare varible start number 
	int someNum = 0;

	//establish a range for possible numbers guessed between 1 and 10
	someNum = rand() % 10 + 1;

	//Doo- while loop for tries and guesses of the user
	do
	{
		// try increments
		++tries;
		cout << " \n \n \n \n \n \n";
		cout << "Attempt Number: " << tries << " \n";
		cout << " Enter your guess: \n";
		cin >> guess;

		//set parameters for if the guess is less than the random number generated
		if (guess < someNum)
		{
			cout << " Sheesh! Scared Money dont make no money \n";
			cout << "Guess alittle higher than that. \n";
		}
		//set parameters for if the guess is more than the random number generated
		else if (guess > someNum)
		{
			cout << " Simmer down! don't blow it all at one time. \n";
			cout << " Try a number slightly lower. \n";
		}
		// set parameters for the correct guess
		else if (guess == someNum)
		{
			cout << " WOO-HOO Very nice! Much success! \n";
			cout << " Look at the new king of the castle. \n";
			cout << "You guessed correctly. \n";
			cout << " Thats all i got for you. Borat says Goodbye American devil. \n";
			cout << " you are still here... I will call Security. \n";
		}
	}
	//set the loop condition
	while (guess != someNum);

	return 0;
}