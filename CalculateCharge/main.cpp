#include <iostream>
#include <iomanip>

using namespace std;

double calculateCharges(double);

int main()  //Menu function
{
    double num1, num2, num3;

    cout << "Enter hours for three customers: ";
    cin >> num1 >> num2 >> num3;
    cout <<"------------------------------------------------- \n";
    cout <<"------------PARKING GARAGE RECEIPT--------------- \n";
    cout <<"------------------------------------------------- \n";

    //Constructing Table of Cost per Hour Representation

    cout << "Car\tHours\tCharge\n";

    cout << "1\t" << fixed << setprecision(1) << num1
    << setprecision(2) << "\t" << "R " << calculateCharges(num1) <<"\n";

    cout << "************************************************ \n";

    cout << "2\t" << fixed << setprecision(1) << num2
    << setprecision(2) << "\t" << "R "<< calculateCharges(num2) <<"\n";

    cout << "************************************************ \n";

    cout << "3 \t" << fixed << setprecision(1) << num3
    << setprecision(2) << "\t" << "R "<< calculateCharges(num3) <<"\n";

    cout << "************************************************ \n" <<"\n";

    cout << "TOTAL\t" << fixed << setprecision(1) << num1 + num2 + num3
    << fixed << setprecision(2) << "\t" << "R "<< calculateCharges(num1) +
    calculateCharges(num1) +calculateCharges(num1) << "\n";

    cout << "************************************************ \n" <<"\n";

    return 0;
}

double calculateCharges(double hours) //Function for Fees per hour
{
    if (hours < 3)
    {
        return 12.00;
    }
    else
    {
        if (hours < 24)
            {
                return 12.00 + (hours - 3) * 0.90;
            }
        else
            {
                return 20.00;
            }
    }
}
