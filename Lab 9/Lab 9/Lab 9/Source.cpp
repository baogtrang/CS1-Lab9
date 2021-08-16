//Bao Trang
//Computer Science 1 - Professor Benjamin Shelton
//Lab 9: The program will demonstrate how to use 
//functions to find the largest integer 

#include <iostream>
#include <fstream>
using namespace std;
int FindMax(int, int, int);
void PrintVal(int, ofstream&);

//function main is to organize the program flow
int main()
{
	ofstream outfile;
	outfile.open("output.txt");
	int A, B, C, Biggest;
	cout << "Please enter 3 integers\n";
	cin >> A >> B >> C;
	Biggest = FindMax(A, B, C);
	PrintVal(Biggest, outfile);
	outfile.close();
	return 0;
}

// Function: FindMax
// Input: accepts 3 integer parameters 
// Process: find the largest integer
// Output: 1 integer
int FindMax(int N1, int N2, int N3)
{
	int Big;
	if (N1 >= N2 && N1 >= N3)
		Big = N1;
	else if (N2 >= N1 && N2 >= N3)
		Big = N2;
	else
		Big = N3;
	return Big;
}

// Function: PrintVal
// Input: accepts one integer parameter and an ofstrream object
// Process: print input parameter to the output file
// Output: none

void PrintVal(int X, ofstream& out)
{
	out << "The answer is " << X << '\n';
}