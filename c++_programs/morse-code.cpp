// Program to test calling functions for Morse Code

#include <iostream>
using namespace std;

void dash( int n)
{
	int i;
	for (i=0; i<n; i++)
		cout<<"-";
}

void dot( int n)
{
	int i;
	for (i=0; i<n; i++)
		cout<<".";
}

void A(){dot(1); dash(1);}

void B() { dash(1);dot(3); }

void decode( char c)
{
	switch (c) {
		case 'A': A(); break;
		case 'B': B(); break;
		default: cout<<"Switch default encountered\n";
	} 
}

main()
{
    char aCharacter;

    cout<< "Enter a letter to convert into Morse code: ";
    cin >> aCharacter;
    decode( aCharacter);
    cout<< "\nDone with program \n";
}