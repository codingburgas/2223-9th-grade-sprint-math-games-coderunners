//Include the needed libraries and header files.
#include <iostream>
#include <random>
#include <cmath>
using namespace std;

//Initialise the needed global variables.
bool stopper = true;
int correctNum = 0;

void randomBin()
{
    cout << endl;
    cout << endl;
    //Initialise the needed variables.
    cout << "Your task is to convert the binary number ";
    int arr[8], sum = 0, n = 7, myGuess;
    bool stopper = false;
    //Random number generator.
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0, 1);

    //The arrays are accepting the values of the random generated number.
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
    //Input your answer.
    cout << "Enter your answer here:";
    cin >> myGuess;
    if (myGuess >= 0 && myGuess <= 10000)
    {
        //Check if the answer is correct or not.
        if (myGuess == sum)
        {
            stopper = true;
            correctNum++;
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
        cout << "Sorry, your answer is incorrect, revise and come again! You got " <<  correctNum << " correct" << endl;
    }
}
void randomDec()
{
    cout << endl;
    cout << endl;
    //Random number generator.
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 99);
    //Initialise the needed variables.
    int number = dis(gen);
    int binary[8], myGuess[8], counter = 0, answerLength = 0, myGuessDup[8] /*Duplicate*/;
    int i = 0, h = 0;
    cout << "Your task is to convert the decimal number ";
    cout << number;
    cout << " to binary number." << endl;
    cout << "Use spaces after every digit! If the number begins with a zero, don't write additional zeros!" << endl;
    cout << "Example: The number 3 is not (0011), but it is (11)!" << endl;

    //Transforms decimal to binary using bitwise operations.
    while (number > 0) 
    {
        binary[i] = number & 1;
        number = number >> 1;
        answerLength++;
        i++;
    }
    for (int j = answerLength - 1; j >= 0; j--)
    {
        myGuessDup[h] = binary[j];
        h++;
    }
    cout << endl;
    //Hint, so it can be easier for the user to guess the answer.
    cout << "HINT: The answer is " << answerLength << " digits long!" << endl;
    cout << endl;
    cout << "Enter your answer here:";
    //Input your answer.
    for (int k = 0; k < answerLength; k++)
    {
        cin >> myGuess[k];
    }
    for (int l = 0; l < answerLength; l++)
    {
        if (myGuessDup[l] == myGuess[l])
        {
            counter++;
        }
    }
    //Check if the answer is correct or not.
    if (counter == answerLength)
    {
        stopper = true;
        correctNum++;
        cout << "Congratulations, you are master!" << endl;
        cout << endl;
    }
    else
    {
        stopper = false;
        cout << "Sorry, your answer is incorrect, revise and come again! You got "<<  correctNum << " correct." << endl;
    }
}
void guessTheNumber()
{
    //Loop the functions.
    do
    {
        if (stopper)
        {
            randomBin();
            if (stopper)
            {
                randomDec();
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    } while (stopper);
}