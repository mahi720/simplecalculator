#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout<<"\n\t\t ----------------Guessing Numbe----------------"<<endl;
    cout<<"\n\t\t---->Guess a number 1 to 100";
    cout<<"\n\t\t --Lets play !"<<endl;

    srand(time(0));
    int randNumber = ( rand() %100) + 1;

    cout<< "\n you will have total 5 chances to guess the correct number. \n";
    int chanceLeft = 5;
    int playerInput;

    for(int i = 1;i<=5;i++){
        cout << "\n--->Enter the Number : ";
        cin >> playerInput;

        if(playerInput == randNumber){
            cout<<"\n Congrats!! YOU WIN"<<endl;
            cout<<"\n Thanks for Playing " <<endl;
            break;
        }
        else{
            if(playerInput > randNumber){
                cout << "\n Insert a Smaller Number ... Try Again " << endl;
            }
            else{
                 cout << "\n [Insert a Larger Number ... Try Again] " << endl;
            }
        }
        chanceLeft--;
        cout << "\n( chances Left to guess the Random number: " << chanceLeft << ")" << endl;

        if (chanceLeft == 0){
            cout<< "\n Sorry your chance has been finished to guess the random number "<<endl;
            cout<< " The random number was : " << randNumber <<endl;
            cout<< "Thanks for playing have a nice day ";

        }
    }

    cout << endl;
    return 0;

}