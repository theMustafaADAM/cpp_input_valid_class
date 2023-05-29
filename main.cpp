#include <iostream>
#include "clsInputValidate.h"

using namespace std;

int main()
{
    cout << "OOP Projects : Input Validation Class!" << endl;

    cout <<  clsInputValidate::IsNumberBetween(200.2,12.5,50.9) << endl;

    clsDate date(27,2,2002);
    cout << clsInputValidate::IsValidDate(date) << endl;

    return 0;
}
