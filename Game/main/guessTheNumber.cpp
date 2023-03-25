#include <iostream>
#include <random>
#include <cmath>
using namespace std;

bool stopper = true;

void randomBin()
{
    cout << "Your task is to convert the binary number ";
    int arr[8], sum = 0, n = 7, myGuess;
    bool stopper = false;
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0, 1);

    for (int i = 0; i < 8; i++)
    {
        arr[i] = dist(mt);
        cout << arr[i];
    }
    cout << " to decimal number." << endl;
    for (int i = 0; i < 8; i++)
    {
        sum = sum + arr[i] * pow(2, n);
        n--;
    }
    cout << "Enter your answer here:";
    cin >> myGuess;
    if (myGuess >= 0 && myGuess <= 10000)
    {
        if (myGuess == sum)
        {
            stopper = true;
            cout << "Congratulations, you are master!" << endl;
            cout << endl;
        }
        else
        {
            stopper = false;
            cout << "Sorry, your answer is incorrect, revise and come again!" << endl;
        }
    }
    else
    {
        stopper = false;
        cout << "Sorry, your answer is incorrect, revise and come again!" << endl;
    }
}
void randomDec()
{

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 99);
    int number = dis(gen);
    int binary[8], myGuess[8], counter = 0, answerLength = 0, myGuessDub[8];
    int i = 0, h = 0;
    cout << "Your task is to convert the decimal number ";
    cout << number;
    cout << " to binary number." << endl;

    cout << "Use spaces after every digit! If the number begins with a zero, don't write additional zeros!" << endl;
    cout << "Example: The number 3 is not (0011), but it is (11)!" << endl;
    while (number > 0)
    {
        binary[i] = number % 2;
        number = number / 2;
        answerLength++;
        i++;
    }
    for (int j = answerLength - 1; j >= 0; j--)
    {
        myGuessDub[h] = binary[j];
        h++;
    }
    cout << endl;
    cout << "Enter your answer here:";
    for (int k = 0; k < answerLength; k++)
    {
        cin >> myGuess[k];
    }
    for (int l = 0; l < answerLength; l++)
    {
        if (myGuessDub[l] == myGuess[l])
        {
            counter++;
        }
    }
    if (counter == answerLength)
    {
        stopper = true;
        cout << "Congratulations, you are master!" << endl;
        cout << endl;
    }
    else
    {
        stopper = false;
        cout << "Sorry, your answer is incorrect, revise and come again!" << endl;
    }
}
void guessTheNumber()
{
    do
    {
        if (stopper == true)
        {
            randomBin();
        }
        else
        {
            break;
        }
        if (stopper == true)
        {
            randomDec();
        }
        else
        {
            break;
        }
    } while (stopper == true);
}