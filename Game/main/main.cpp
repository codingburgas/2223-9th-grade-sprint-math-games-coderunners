#include <iostream>
#include <iomanip>
#include "bitwise_test.h"
using namespace std;

void drawName()
{
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
    cout << setw(78) << "|======================|" << endl;
    cout << setw(78) << "|======================|" << endl;
    cout << setw(77) << "| Your options:      |" << endl;
    cout << setw(77) << "|                    |" << endl;
    cout << setw(77) << "|  1. Play & Learn   |" << endl;
    cout << setw(77) << "|      Enter 1;      |" << endl;
    cout << setw(77) << "|                    |" << endl;
    cout << setw(77) << "|  2.  Revise        |" << endl;
    cout << setw(77) << "|      Enter 2;      |" << endl;
    cout << setw(77) << "|                    |" << endl;
    cout << setw(77) << "|                    |" << endl;
    cout << setw(77) << "|                    |" << endl;
    cout << setw(77) << "|                    |" << endl;
    cout << setw(78) << "|======================|" << endl;
    cout << setw(78) << "|======================|" << endl;
    cout << endl;
    cout << endl;
    cout << setw(220) << "All rights reserved 2023, Team CodeRunners" << endl;
}

void play()
{
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        playBitwiseTest();
    case 2:

    default:
        cout << "Invalid choice. Please choose from the given options." << endl;
    }
}
int main()
{
	drawName();
    play();
	return 0;
}