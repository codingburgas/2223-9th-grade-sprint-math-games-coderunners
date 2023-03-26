//Include the needed libraries and header files.
#include <iostream>
#include <random>
#include <string>
using namespace std;

//Initialise the needed global variables.
bool pass = true;
int correctBit = 0;

void bitwiseAnd()
{
    //Initialise the needed variables.
    cout << "What will be the output of ";
    int arr1[8], arr2[8], arr3[8], myGuess[8], counter = 0;
    //Random number generator.
    random_device rd1;
    mt19937 mt1(rd1());
    uniform_int_distribution<int> dist1(0, 1);
    random_device rd2;
    mt19937 mt2(rd2());
    uniform_int_distribution<int> dist2(0, 1);

    //The arrays are accepting the values of the random generated number.
    for (int i = 0; i < 8; i++)
    {
        arr1[i] = dist1(mt1);
        cout << arr1[i];
    }
    cout << " & ";
    for (int j = 0; j < 8; j++)
    {
        arr2[j] = dist2(mt2);
        cout << arr2[j];
    }
    cout << "?" << endl;
    cout << "Use spaces after every digit!" << endl;
    for (int k = 0; k < 8; k++)
    {
        if (arr1[k] == 1 && arr2[k] == 1)
        {
            arr3[k] = 1;
        }
        else
        {
            arr3[k] = 0;
        }
    }
    cout << endl;
    //Input your answer.
    cout << "Enter your answer here:";
    for (int i = 0; i < 8; i++)
    {
        cin >> myGuess[i];
    }
    for (int l = 0; l < 8; l++)
    {
        if (arr3[l] == myGuess[l])
        {
            counter++;
        }
    }
    //Check if the answer is correct or not.
    if (counter == 8)
    {
        pass = true;
        correctBit++;
        cout << "Congratulations, you are master!" << endl;
        cout << endl;
    }
    else
    {
        pass = false;
        cout << "Sorry, your answer is incorrect, revise and come again! You got " << correctBit << " correct." << endl;
    }
}
void bitwiseOr()
{
    //Initialise the needed variables.
    cout << "What will be the output of ";
    int arr1[8], arr2[8], arr3[8], myGuess[8], counter = 0;
    bool stoper = false;
    //Random number generator.
    random_device rd1;
    mt19937 mt1(rd1());
    uniform_int_distribution<int> dist1(0, 1);
    random_device rd2;
    mt19937 mt2(rd2());
    uniform_int_distribution<int> dist2(0, 1);

    //The arrays are accepting the values of the random generated number.
    for (int i = 0; i < 8; i++)
    {
        arr1[i] = dist1(mt1);
        cout << arr1[i];
    }
    cout << " | ";
    for (int j = 0; j < 8; j++)
    {
        arr2[j] = dist2(mt2);
        cout << arr2[j];
    }
    cout << "?" << endl;
    cout << "Use spaces after every digit!" << endl;
    for (int k = 0; k < 8; k++)
    {
        if (arr1[k] == 0 && arr2[k] == 0)
        {
            arr3[k] = 0;
        }
        else
        {
            arr3[k] = 1;
        }
    }
    cout << endl;
    //Input your answer.
    cout << "Enter your answer here:";
    for (int i = 0; i < 8; i++)
    {
        cin >> myGuess[i];
    }
    for (int l = 0; l < 8; l++)
    {
        if (arr3[l] == myGuess[l])
        {
            counter++;
        }
    }
    //Check if the answer is correct or not.
    if (counter == 8)
    {
        pass = true;
        correctBit++;
        cout << "Congratulations, you are master!" << endl;
        cout << endl;
    }
    else
    {
        pass = false;
        cout << "Sorry, your answer is incorrect, revise and come again! You got " << correctBit << " correct." << endl;
    }
}
void bitwiseXOR()
{
    //Initialise the needed variables.
    cout << "What will be the output of ";
    int arr1[8], arr2[8], arr3[8], myGuess[8], counter = 0;
    bool stoper = false;
    //Random number generator.
    random_device rd1;
    mt19937 mt1(rd1());
    uniform_int_distribution<int> dist1(0, 1);
    random_device rd2;
    mt19937 mt2(rd2());
    uniform_int_distribution<int> dist2(0, 1);

    //The arrays are accepting the values of the random generated number.
    for (int i = 0; i < 8; i++)
    {
        arr1[i] = dist1(mt1);
        cout << arr1[i];
    }
    cout << " ^ ";
    for (int j = 0; j < 8; j++)
    {
        arr2[j] = dist2(mt2);
        cout << arr2[j];
    }
    cout << "?" << endl;
    cout << "Use spaces after every digit!" << endl;
    for (int k = 0; k < 8; k++)
    {
        if ((arr1[k] == 0 && arr2[k] == 1) || (arr1[k] == 1 && arr2[k] == 0))
        {
            arr3[k] = 1;
        }
        else
        {
            arr3[k] = 0;
        }
    }
    cout << endl;
    //Input your answer.
    cout << "Enter your answer here:";
    for (int i = 0; i < 8; i++)
    {
        cin >> myGuess[i];
    }
    for (int l = 0; l < 8; l++)
    {
        if (arr3[l] == myGuess[l])
        {
            counter++;
        }
    }
    //Check if the answer is correct or not.
    if (counter == 8)
    {
        pass = true;
        correctBit++;
        cout << "Congratulations, you are master!" << endl;
        cout << endl;
    }
    else
    {
        pass = false;
        cout << "Sorry, your answer is incorrect, revise and come again! You got " << correctBit << " correct." << endl;
    }
}
void playBitwiseTest()
{
    //Loop the functions.
    do
    {
        if (pass)
        {
            bitwiseAnd();
            if (pass)
            {
                bitwiseOr();
                if (pass)
                {
                    bitwiseXOR();
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
        }
        else
        {
            break;
        }
    } while (pass);
}