//Include the needed libraries and header files.
#include <iostream>
#include <iomanip>
#include "bitwise_test.h"
#include "guessTheNumber.h"
using namespace std;

void drawName()
{
    //Draw the name of the game.
	cout << "             _______     _____                                                       _______       _______      ______" << endl;
	cout << "            /           |     \\     |      |   \\                /\\                /                |           /" << endl;
	cout << "           /            |      \\    |      |    \\              /  \\              /      |          |          / " << endl;
	cout << "          /             |       \\   |      |     \\            /    \\            /       |          |         /" << endl;
	cout << "          |_________    |        \\  |      |      \\          /      \\          /        |          |______  |_________" << endl;
	cout << "          \\             |        /  |      |       \\        /        \\        /         |                 |  \\ " << endl;
	cout << "           \\            |       /   |      |        \\      /          \\      /          |                 |   \\ " << endl;
	cout << "            \\           |      /    |      |         \\    /            \\    /           |                 |    \\ " << endl;
	cout << "             \\______    |_____/     |______|          \\__/              \\__/         _______      ________|     \\_____" << endl;
    cout << endl;
    cout << endl;
    //Draw the options.
    cout << setw(78) << "|======================|" << endl;
    cout << setw(78) << "|======================|" << endl;
    cout << setw(77) << "| Your options:      |" << endl;
    cout << setw(77) << "|                    |" << endl;
    cout << setw(77) << "| 1. Bitwise Test    |" << endl;
    cout << setw(77) << "|      Enter 1;      |" << endl;
    cout << setw(77) << "|                    |" << endl;
    cout << setw(77) << "| 2. Guess The Number|" << endl;
    cout << setw(77) << "|      Enter 2;      |" << endl;
    cout << setw(77) << "|                    |" << endl;
    cout << setw(77) << "|                    |" << endl;
    cout << setw(77) << "|                    |" << endl;
    cout << setw(77) << "|                    |" << endl;
    cout << setw(78) << "|======================|" << endl;
    cout << setw(78) << "|======================|" << endl;
    cout << endl;
    cout << endl;
    cout << setw(213) << "All rights reserved 2023, Team CodeRunners" << endl;
    cout << endl;
    cout << endl;
}
void play()
{
    //Enter the game that you want to play.
    string choice;
    bool num = 0;
    cout << "Enter the number of the game that you want play: " << endl;
    cin >> choice;
    if (choice == "1")
    {
        playBitwiseTest();
    }
    else if (choice == "2")
    {
        guessTheNumber();
    }
    else
    {
        cout << "Please enter only numbers that are showing above! Try again!" << endl;
    }
}
//Main function.
int main()
{
	drawName();
    play();
	return 0;
}