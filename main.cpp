#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


using namespace std;
void addName(ifstream& inStream, ofstream& outStream);

int main() {

	ifstream fin;
	ofstream fout;
	cout << " Begin editing files.\n";
	fin.open("email.txt");
	if (fin.fail())
	// this will the fail function to check to see if the file opens correctly. fail uses cstdlib library
	{
		cout << "Input file failed to open.\n";
		exit(1);
	}

	
	fout.open("newEmail.txt");
	if (fout.fail())
	// this will the fail function to check to see if the file opens correctly. fail uses cstdlib library
	{
		cout << "Input file failed to open.\n";
		exit(1);
	}
	
	addName(fin , fout);
	
	fin.close();
	fout.close();
	
	cout << "End of editing.\n";
	
	return 0;
}

void addName(ifstream& inStream, ofstream& outStream)
{

	char next;
	char symbol;
	
	
	inStream.get(next);
	while (! inStream.eof())
	{
		 if(next == '#') {
			 		inStream.get(next);
					if(next == 'N') {
						inStream.get(next);
					}
						if(next == '#') {
							cout << "Please enter a name and press enter.\n";
									do
				{
					
					cin.get(symbol);
					cout << symbol;
					outStream.put(symbol);
				} while (symbol != '\n');
					}
		}
			 if(next == '#') {
				inStream.get(next);
				 }
		outStream << next;
		inStream.get(next);
	}
}