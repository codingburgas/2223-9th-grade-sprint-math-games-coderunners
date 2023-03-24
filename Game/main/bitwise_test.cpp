#include <iostream>
#include <random>
#include <string>
using namespace std;

bool pass = true;

void bitwiseAnd()
{
    cout << "What will be the output of ";
    int arr1[8], arr2[8], arr3[8], myGuess[8], counter = 0;
    random_device rd1;
    mt19937 mt1(rd1());
    uniform_int_distribution<int> dist1(0, 1);

    random_device rd2;
    mt19937 mt2(rd2());
    uniform_int_distribution<int> dist2(0, 1);

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
    if (counter == 8)
    {
        pass = true;
        cout << "Congratulations, you are master!" << endl;
        cout << endl;
    }
    else
    {
        pass = false;
        cout << "Sorry, your answer is incorrect, revise and come again!" << endl;
    }
}
void bitwiseOr()
{
    cout << "What will be the output of ";
    int arr1[8], arr2[8], arr3[8], myGuess[8], counter = 0;
    bool stoper = false;
    random_device rd1;
    mt19937 mt1(rd1());
    uniform_int_distribution<int> dist1(0, 1);

    random_device rd2;
    mt19937 mt2(rd2());
    uniform_int_distribution<int> dist2(0, 1);

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
    if (counter == 8)
    {
        pass = true;
        cout << "Congratulations, you are master!" << endl;
        cout << endl;
    }
    else
    {
        pass = false;
        cout << "Sorry, your answer is incorrect, revise and come again!" << endl;
    }
}
void bitwiseXOR()
{
    cout << "What will be the output of ";
    int arr1[8], arr2[8], arr3[8], myGuess[8], counter = 0;
    bool stoper = false;
    random_device rd1;
    mt19937 mt1(rd1());
    uniform_int_distribution<int> dist1(0, 1);

    random_device rd2;
    mt19937 mt2(rd2());
    uniform_int_distribution<int> dist2(0, 1);

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
    if (counter == 8)
    {
        pass = true;
        cout << "Congratulations, you are master!" << endl;
        cout << endl;
    }
    else
    {
        pass = false;
        cout << "Sorry, your answer is incorrect, revise and come again!" << endl;
    }
}
void playBitwiseTest()
{
    do
    {
        if (pass == true)
        {
            bitwiseAnd();
        }
        else
        {
            break;
        }
        if (pass == true)
        {
            bitwiseOr();
        }
        else
        {
            break;
        }
        if (pass == true)
        {
            bitwiseXOR();
        }
        else
        {
            break;
        }
    } while (pass == true);
}