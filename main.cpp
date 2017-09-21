#include <iostream>
#include <fstream>
using namespace std;

void creditCardSearch(long int creditCard[]);

int main()
{
    long int creditCard[20]; // initialize creditCard array
    ifstream inputFile;

    inputFile.open("cards.txt");

// validate file is being captured
    if (!inputFile)
    {
        cout << "ERROR: Invalid filename\n";
        exit(1);

    }


    for(int i = 0; i < 20; i++)
    {
        inputFile >> creditCard[i]; // cards.txt is going into the creditCard array
        cout << "The credit card number is: " << creditCard[i] << endl;
    }

    creditCardSearch(creditCard);

    inputFile.close();

    return 0;
}

// This function asks the user for a credit card number they would like to use and confirm whether or not it is a match
void creditCardSearch(long int creditCard[])
{
    int userCC;
    cout << "Enter your credit card number: ";
    cin >> userCC;
    for(int i=0; i < 20; i++)
    {
        if (creditCard[i] == userCC)
        {
            cout << "It's a match" << endl;
        }
    }

}
