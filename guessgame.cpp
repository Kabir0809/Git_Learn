#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned int) time(NULL));
    int number = (rand() % 100) + 1; 
    int guess = 0;

    for(int turns=1;;turns++){
        
        cout << "Turn:"<<turns<<endl;
        cout<<"     Guess Number between [1-100]: ";
        cin >> guess;
        if(guess>100)
            cout<<"Invalid Guess!!! Guess between [1-100]"<<endl;
        
        else{
            if (guess > number)
            cout << "Guess lower!" << endl;
            else if (guess < number)
            cout << "Guess higher!" << endl;
            else{
                cout << "You won!" << endl;
                cout<<"Turns taken to win:"<<turns<<endl;
                break;
            }
        }
    }
  return 0;
}