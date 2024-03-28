#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    cout<<"Let's play the Number Guessing Game.\n";
    srand(time(0));
    int lb, ub;
    cout<<"Enter the lower bound for guessing: ";
    cin>>lb;
    cout<<"Enter the upper bound for guessing: ";
    cin>>ub;
    if(lb>ub){
        cout<<"Error: Lower bound is greater then upper bound. \n";
    }
    int number = rand() % (ub-lb+1) + lb;
    int guess, attempts=0;

    cout<<"Guess the number between " <<lb<< " and " <<ub<< ": "; 

    while (true) {
        cin >> guess;
        attempts++;

        if (guess < number) {
            cout << "Too low! Try again: ";
        } 
        else if (guess > number) {
            cout << "Too high! Try again: ";
        } 
        else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            break;
        }
    }
}