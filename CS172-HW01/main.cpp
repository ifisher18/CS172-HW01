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

using namespace std;

int doubleInt (int x);
//int add (int a, int b);
void addone (int &k);
const int ARRAY_SIZE = 5;

// EX01_01
/////////////////////////////////////////////
void ex02 () {
    cout << "EX01_01" << endl;
    cout << " " << endl;
    
    // part a.
    bool hasPassedTest = true;
    
    // part b.
    srand(time(0));
    int x = rand();
    int y = rand();
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
    if (x >= y) {
        cout << "x is greater than or equal to y" << endl;
    }
    else {
        cout << "x is less than y" << endl;
    }
    cout << " " << endl;
    
    // part c.
    int numberOfShares;
    cout << "Enter a value: ";
    cin >> numberOfShares;
    if (numberOfShares < 100) {
        cout << "The value you entered is less than 100" << endl;
    }
    else {
        cout << "The value you entered is greater than 100" << endl;
    }
    cout << " " << endl;
    
    // part d.
    int BoxWidth;
    int BookWidth;
    cout << "Enter a box width: ";
    cin >> BoxWidth;
    cout << "Enter a book width: ";
    cin >> BookWidth;
    
    if (BoxWidth % BookWidth == 0) {
        cout << "The box width is evenly divisible by the book width!" << endl;
    }
    else {
        cout << "The box width is not evenly divisible by the book width!" << endl;
    }
    cout << " " << endl;
    
    // part e.
    int Shelf_Life;
    int outsideTemp;
    cout << "Enter an integer representing the shelf life of a box of chocolates (in days): ";
    cin >> Shelf_Life;
    cout << " " << endl;
    cout << "Now enter the current outside temperature in degrees Fahrenheit rounded to a whole number: ";
    cin >> outsideTemp;
    if (outsideTemp > 90) {
        Shelf_Life = Shelf_Life - 4;
        cout << "Since the outside temperature is greater than 90 degrees Fahrenheit, the shelf life has be deincremented by 4 to " << Shelf_Life << endl;
    }
    else {
        cout << "The outside temperature is not greater than 90 degrees Fahrenheit, so the shelf life remains at " << Shelf_Life << "." << endl;
    }
    cout << " " << endl;
    
    
}

// EX01_02
/////////////////////////
void ex03 () {
    cout << "EX01_02" << endl;
    cout << " " << endl;
    
    // part a.
    double areaOfsquare;
    
    cout << "Enter the area of a square: ";
    cin >> areaOfsquare;
    double SideLengthofSquare;
    SideLengthofSquare = sqrt (areaOfsquare);
    double lengthOfdiagonal = (sqrt(2) * SideLengthofSquare);
    cout << "The length of the diagonal for this square is: " << lengthOfdiagonal << endl;
    cout << " " << endl;
    
    // part b.
    char response;
    cout << "Enter a yes (y) or no (n) response: ";
    cin >> response;
    if (response == 'y') {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    cout << " " << endl;
    
    // part c.
    char tab = 9; // or char tab = '\t'
    
    // part d.
    string mailingAddress;
    cin.ignore();
    cout << "Enter your mailing address: ";
    getline(cin, mailingAddress);
    cout << "The mailing address you entered was: " << mailingAddress << endl;
    cout << " " << endl;
    
    // part e.
    string s = "";
}

// EX01_03
////////////////////////
void ex04 () {
    cout << "EX01_03" << endl;
    cout << " " << endl;
    
    // part a.
    int guess;
    cout << "Enter a value between 1 and 10: ";
    cin >> guess;
    while (guess < 1 || guess > 10) {
        cout << "Please try entering a value between 1 and 10 again: " << endl;
        cin >> guess;
        break;
    }

    cout << " " << endl;
    
    // part b.
    int sum = 0;
    for (int i = 0; i < guess; i++) {
        sum = sum + (i * i * i);
    }
    cout << sum << endl;
    cout << " " << endl;
    
    // part c.
    int i = 1;
    do {
        cout << " * " << endl;
        i++;
    } while (i <= guess);
    
    // part d.
    int x = 0;
    for (int i = 0; i < 20; i++) {
        x += 2;
        cout << x << endl;
    }
    
    // part e.
    doubleInt(guess);
    
    // part f.
    int num1;
    int num2;
    cout << "Enter 2 integers: ";
    cin >> num1 >> num2;
    //add (num1, num2);
    
    // part g.
    addone(guess);
}

// EX01_04
//////////////////////////
void ex05 () {
    
    // part a.
    
    double myList[ARRAY_SIZE];
    cout << "Enter " << ARRAY_SIZE << " integers pushing return after each number: " << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cin >> myList[i];
    }
    
    // part b.
    
    // for addition
    int a, sum = 0;
    for (a = 0; a < ARRAY_SIZE; a++) {
        sum += myList[a];
    }
    cout << sum << endl;
    
    // for product
    int p, product = 1;
    for (p = 0; p < ARRAY_SIZE; p++) {
        product *= myList[p];
    }
    cout << product << endl;
    
    // part c.
    
    
    // part d.
    
    
}

// for EX1_03 part e.
int doubleInt (int x) {
    return (2 * x);
}

// for EX1_03 part g.
void addone (int &k) {
    k++;
}

// part c. EX1_04
void Blackcat (double x[], int size) {
    for (int i = 0; i < size; i++) {
        cout << x[i] << endl;
    }
}

void Alien (double g[], int size) {
    int value;
    cout << "Enter a value: ";
    cin >> value;
    for (int i = 0; i < size; i++) {
        if (value == g[i]) {
            cout << "The array contains the entered value!" << endl;
            return;
        }
    }
    cout << "The array does not contain the entered value." << endl;
}

int main () {
    
    
    //ex02 ();
    //ex03 ();
    //ex04 ();
    ex05 ();
    return 0;
}
