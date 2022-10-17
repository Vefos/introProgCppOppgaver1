#include <iostream>
using namespace std;



int main()
//Lager en liste og printer ut tallene inni
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int Lengde = sizeof(numbers) / sizeof(int);
    cout << "The numbers are: ";
    
    for (int n = 0; n < Lengde; n++)
    {
        cout << n << "  ";
    }
    cout << "\nLengden er:" << Lengde;
    cout << "\n";
    cout << "The numbers are: ";

   
    for (int i = 0; i < Lengde; i++)
    {
        cout << numbers[i] << "  ";
    }

    cout << "\n";
    cout << "The numbers are: ";

    int teller = 0;
    while (teller < 10)
    {

        cout << numbers[teller] << "  ";
        teller++;
    }

    cout << "\n";
   
    //Yttre og innre lister

    int twoD[4][2] = { {2, 3},{33, 55}, {6,7}, {76, 2000} };
    int lengdeYttre = sizeof(twoD) / sizeof(twoD[0]);
    int lengdeInnre = sizeof(twoD[0]) / sizeof(int);

    cout << "Yttre: " << lengdeYttre << "\tInnre: " << lengdeInnre << "\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++) 
        {
            cout << twoD[i][j] << "  ";
        }
        
    }

    return 0;
    
}

