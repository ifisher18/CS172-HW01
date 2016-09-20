//
//  main.cpp
//  CS172-HW01
//
//  Created by Ian J. Fisher on 9/13/16.
//  Copyright © 2016 Ian J. Fisher. All rights reserved.
//  CS 172 EX01_01

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

int doubleInt(int x); // global function used below
void addone(int &k); // global function used below
const int ARRAY_SIZE = 5; // declaring size of array
void Blackcat(double x[], int size); // function used below
void Alien(double g[], int size); // function used below
int add(int num1, int num2); // function used below

///////////////////////
// EX01_01
///////////////////////

void ex02() {
	cout << "*********** EX01_01 *********" << endl;
	cout << endl;

	// part a.

	bool hasPassedTest = true;

	// part b.

	srand(time(0)); // random number generator
	int x = rand();
	int y = rand();
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
	if (x >= y) { // if statement that compares the size of x to size of y
		cout << "x is greater than or equal to y" << endl;
	}
	else {
		cout << "x is less than y" << endl;
	}
	cout << endl;

	// part c.

	int numberOfShares;
	cout << "Enter a value: ";
	cin >> numberOfShares;
	if (numberOfShares < 100) { // if statement that checks if numberOfShares is less than 100
		cout << "The value you entered is less than 100" << endl;
	}
	else {
		cout << "The value you entered is greater than 100" << endl;
	}
	cout << endl;

	// part d.

	int BoxWidth;
	int BookWidth;
	cout << "Enter a box width: ";
	cin >> BoxWidth;
	cout << "Enter a book width: ";
	cin >> BookWidth;

	if (BoxWidth % BookWidth == 0) { // if statement that checks if there is a remainder when the widths are divided
		cout << "The box width is evenly divisible by the book width!" << endl;
	}
	else {
		cout << "The box width is not evenly divisible by the book width!" << endl;
	}
	cout << endl;

	// part e.

	int Shelf_Life;
	int outsideTemp;
	cout << "Enter an integer representing the shelf life of a box of chocolates (in days): ";
	cin >> Shelf_Life;
	cout << " " << endl;
	cout << "Now enter the current outside temperature in degrees Fahrenheit rounded to a whole number: ";
	cin >> outsideTemp;
	cout << endl;
	if (outsideTemp > 90) { // if statement that checks if inputed value is greater than 90
		Shelf_Life = Shelf_Life - 4;
		cout << "** Since the outside temperature is greater than 90 degrees Fahrenheit, the shelf life has be deincremented by 4 to " << Shelf_Life << endl;
	}
	else {
		cout << "** Since the outside temperature is not greater than 90 degrees Fahrenheit, the shelf life remains at " << Shelf_Life << "." << endl;
	}
	cout << endl;
}

////////////////////////
// EX01_02
////////////////////////

void ex03() {
	cout << "********* EX01_02 *********" << endl;
	cout << endl;

	// part a.

	double areaOfsquare;
	cout << "Enter the area of a square: ";
	cin >> areaOfsquare;
	double SideLengthofSquare;
	SideLengthofSquare = sqrt(areaOfsquare);
	double lengthOfdiagonal = (sqrt(2) * SideLengthofSquare); // calculates length of diagonal
	cout << "The length of the diagonal for this square is: " << lengthOfdiagonal << endl;
	cout << endl;

	// part b.

	char response; // character type
	cout << "Enter a yes (y) or no (n) response: ";
	cin >> response;
	if (response == 'y') {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	cout << endl;

	// part c.

	char tab = 9; // or char tab = '\t'

	// part d.

	string mailingAddress;
	cin.ignore(); // ignores prev. 'cins'
	cout << "Enter your mailing address: ";
	getline(cin, mailingAddress);
	cout << "The mailing address you entered was: " << mailingAddress << endl;
	cout << endl;

	// part e.

	string s = "";
}

////////////////////////
// EX01_03
////////////////////////

void ex04() {
	cout << "********* EX01_03 *********" << endl;
	cout << endl;

	// part a.

	int guess;
	cout << "Enter a value between 1 and 10: ";
	cin >> guess;
	cout << endl;
	while (guess < 1 || guess > 10) { // while that checks if entered value is between 1 and 10
		cout << "Please try entering a value between 1 and 10 again: " << endl;
		cin >> guess;
		break;
	}
	cout << endl;
	cout << "The value you entered was: " << guess << endl;
	cout << endl;

	// part b.

	int sum = 0;
	for (int i = 0; i <= guess; i++) {
		sum = sum + (i * i * i); // calculates the sum of all cubes
	}
	cout << "The sum of the cubes from 1 to the number given is: " << sum << endl;
	cout << endl;

	// part c.

	int i = 1;
	do {
		cout << " * " << endl;
		i++;
	} while (i <= guess);
	cout << endl;

	// part d.

	cout << "The even numbers from 0 to 40 are: " << endl;
	int x = 0;
	for (int i = 0; i < 20; i++) {
		x += 2; // incraments x by 2
		cout << x << endl; // couts the x value for each interation of for loop
	}
	cout << endl;

	// part e.
	cout << "The double of the value you entered earlier is: " << doubleInt(guess) << endl; // calls function that doubles integer
	cout << endl;

	// part f.

	int num1 = rand(); // creates rand number
	int num2 = rand(); // creates rand number
	cout << "The two random numbers are: " << num1 << "and " << num2 << "." << endl;
	cout << "The sum of these two numbers is: " << add(num1, num2) << "." << endl;
	cout << endl;

	// part g.

	addone(guess);
	cout << endl;
}

//////////////////////////
// EX01_04
//////////////////////////

void ex05() {
	cout << "******** EX01_04 *********" << endl;
	cout << endl;

	// part a.

	double myList[ARRAY_SIZE];
	cout << "Enter " << ARRAY_SIZE << " integers pushing return after each number: " << endl;
	for (int i = 0; i < ARRAY_SIZE; i++) { // for loop that inputs integers into array
		cin >> myList[i]; // cins to created array
	}
	cout << endl;

	// part b.

	// for addition
	int a, sum = 0;
	for (a = 0; a < ARRAY_SIZE; a++) {
		sum += myList[a];
	}
	cout << "The sum of the array is: " << sum << endl;
	cout << endl;

	// for product
	int p, product = 1;
	for (p = 0; p < ARRAY_SIZE; p++) {
		product *= myList[p];
	}
	cout << "The product of the array is: " << product << endl;
	cout << endl;

	// part c.

	Blackcat(myList, ARRAY_SIZE); // function that takes an array and the size of the array, and outputs the values in that array
	cout << endl;

	// part d.

	Alien(myList, ARRAY_SIZE); //function that checks a user - entered value if it is in an array
	cout << endl;
}

///////////////////////////
// FUNCTIONS USED ABOVE:
///////////////////////////

// function that returns the sum of two numbers
int add (int g, int h)
{
	int sum = (g + h);
	return sum;
}

// function that returns twice the integer given
int doubleInt(int x) {
	return (2 * x);
}

// function that adds one to a parameter (pass by reference)
void addone(int &k) {
	k++;
}

// function that takes an array and the size of the array, and outputs the values in that array
void Blackcat(double x[], int size) {
	for (int i = 0; i < size; i++) {
		cout << x[i] << endl;
	}
}

// function that checks a user-entered value if it is in an array
void Alien(double g[], int size) {
	bool check = false;
	int value;
	cout << "Enter a value: ";
	cin >> value;
	for (int i = 0; i < size; i++) {
		if (value == g[i]) {
			check = true;
		}
	} 
	if (check == true)
	{
		cout << "The value entered is in the array" << endl;
	}
	else
	{
		cout << "The value entered is not in the array" << endl;
	}
}

int main() {
	ex02 (); // calls function ex02
	ex03 (); // calls function ex03
	ex04 (); // calls function ex04
	ex05 (); // calls function ex05
	return 0;
}