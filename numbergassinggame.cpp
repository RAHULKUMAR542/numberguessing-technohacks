#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    int num,guess,tries=0;
    srand(time(0));
    num=rand()%100+1;
    cout<<"guess my number game\n";
    do{
        cout<<"enter a guess between 1 to 100:";
        cin>>guess;
        tries++;
        if(guess > num){
            cout<<"To high!\n\n";
        }
        else if(guess < num){
            cout<<"To low!\n\n";
        }
            else{
                cout<<"\ncorrect!"<<tries<<"guesses!\n";
            }
        }while(guess!=num);
    
    return 0;
}
