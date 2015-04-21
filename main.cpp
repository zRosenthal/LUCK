#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int getRandomNumber(int level) {
	srand (time(NULL));
	int r = rand();
	cout << "random = " << r << endl;
	while(r==0) {
		r = rand();
	}
	int num = r%level+1;
	cout << "num = " << num << endl;
	return num;
}

int main() {
	int userInput = 1;
	int level = 1;
	cout << "0 - to exit, enter a number between the specified values" 
		<< " if you enter the correct number you advance a level." 
		<< " if you guess the wrong number you go back a level" << endl;
	while(userInput) {
		cout << "Level " << level << " input a number between 1 and " << level << ": ";
		cin >> userInput;
		if(userInput == getRandomNumber(level)) {
			cout << "NICE JOB" << endl;
			level++;
		}
		else {
			if(level != 1) {
				cout << "YOU SUCK, back one level" << endl;
				level--;
			}
			else {
				cout << "You are an embarsessment to your family - try agian" << endl;
			}
		}
	}
}
