#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(){
    srand(time(NULL));
    
    int userChoice;
    for (int i = 0; i=1; i++)
    {
    int computerChoice = (rand()%3);
    cout<<"Enter your choice(1 for paper, 2 for rock and 3 for scissors)"<<endl;
    cin>>userChoice;
    cout<<userChoice<<endl;

    if (userChoice != 1 && userChoice != 2 && userChoice != 3)
    {
        cout<<"Please select a valid option !!"<<endl;
        continue;
    }

    if (computerChoice==0)
    {
        cout<<"Computer choses paper"<<endl;
    }
    else if (computerChoice==2)
    {
        cout<<"Computer choses rock"<<endl;
    }
    else
    cout<<"Computer choses scissors"<<endl;
    
    if (userChoice==computerChoice)
    {
        cout<<"-->It's a tie!"<<endl;
    }
    else if ((userChoice==0 && computerChoice==2) || (userChoice==2 && computerChoice==3) || (userChoice==3 && computerChoice==0))
        {
            cout<<"-->Yippee!, You win"<<endl;
        }
        else
            cout<<"-->Computer wins"<<endl;

    int option;
    cout<<"Press 1 to play again and 2 to exit"<<endl;
    cin>>option;
    if (option==1)
        continue;
    else
        break;
    
    }
    return 0;
}