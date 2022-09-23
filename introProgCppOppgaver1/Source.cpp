#include <iostream> 

using namespace std;



// opgave 1 

//int main() 

  //{ 

//cout << "Hello, World"; 



  //} 



// oppgave 2 

//int main() 

//{ 

//string noe; 

//cout << "Skriv ned noe"; 

//cin >> noe; 

//cout << "Du skrev dette " <<noe; 





/*void hallo()

{





string Hei;

cout << "   Hei, hva heter du \n";

cin >>  Hei;

cout << " Du heter "   << Hei;





}





int main()

{

int i = 1;

for (i = 1; i < 5;)

{

hallo();

++i;



}

if (i == 5);

{

cout << " Stop ";

}





}

*/



char vetle = 'a';

int vetle1 = 1;

long vetle2 = 1;

float vetle3 = 2;

double vetle4 = 3;

int main()

{

    cout << "stoerrelsen paa char = " << sizeof(vetle) << "\n";

    cout << "stoerrelsen paa int = " << sizeof(vetle1) << "\n";

    cout << "stoerrelsen paa long = " << sizeof(vetle2) << "\n";

    cout << "stoerrelsen paa float = " << sizeof(vetle3) << "\n";

    cout << "stoerrelsen paa double = " << sizeof(vetle4) << "\n";

}

