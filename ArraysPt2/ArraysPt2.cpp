// ArraysPt2.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Jeff O'Hara
A game that shows how to use arrays
*/

#include <iostream>
#include <windows.h>
#include <cstring>
#include <ctime>
#include <cstdlib>


using namespace std;

//Initialize main program
int main()
{
    //a created array with 10 professors names
    string UATprofessor[10] = { "Beam", "Belanger","Bolman","Bowling","Brokaw","Bunce","Clark","Coddington","Dunley","Galatas" };

    //for loop to check array
    for (int i = 0; i < 10; i++)
        cout << "Professor " << UATprofessor[i] << endl;  //output to the screen for the professor list


    //a created array with 20 rooms
    int UATmap[20] = { 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119 };
    for (int i = 0; i < 20; i++)
        cout << "Classroom " << UATmap[i] << endl;

    //create score for grades
    int guessNum;
    int gradeScore = 200;

    //create a random number generator
    srand(time(0));

    //this is the random number generator
    int randnum = rand() % 10 + 1;
    cout << "Please guess a number between 1-10. Each guess costs 100 points." << endl;
    cin >> guessNum;
    cout << "You guessed " << guessNum << endl;
    cout << "The correct number is " << randnum << endl;
    cout << "Your current score is " << gradeScore << "\n";

    //This is the guessing game
    while (guessNum != randnum)
    {
        cout << "You did not guess correctly, the professor " << UATprofessor[randnum - 1] << "..." << endl;
        gradeScore -= 100;
        cout << "Please guess a number between 1-10: " << endl;
        cin >> guessNum;
        cout << "You guessed" << guessNum << endl;
        cout << "The correct number is " << randnum << endl;
        cout << "Your current score is " << gradeScore << "\n";

    }

    //this is if the number matches
    if (guessNum == randnum)
    {
        cout << "You gueesed correctly for professor " << UATprofessor[randnum - 1] << "!" << endl;
        gradeScore += 200;
        cout << "Your score is " << gradeScore << endl;
        Beep(500, 500);
    }

    return 0;
}