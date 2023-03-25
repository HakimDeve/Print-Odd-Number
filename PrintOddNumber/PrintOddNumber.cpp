// PrintOddNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enNum { Number };

enNum ReadNumber()
{
    int RN;

    cout << "Enter The Number Please " << endl;
    cin >> RN;
    return(enNum)RN;
}


short PrintLoopNumbers(enNum Number)
{
    for (int Start = 1; Start <= Number; Start+=2)
    {
        cout << "The Number is ------> " << Start << endl;
    }

    return Number;
}

int main()
{

    PrintLoopNumbers(ReadNumber());

    return 0;
}
