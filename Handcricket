#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class CricketGame {
    public:
        void playGame();
        int random();
        int batting();
        int balling();
        int decideFirstIning(int tossResult);
        bool toss();
        int batting(int firstIningTotal);
        int balling(int firstIningTotal);
    
    private:
        int firstInning;
        int secondInning;
        int firstInningBatting;
        int firstInningBalling;
        int secondInningBatting;
        int secondInningBalling;
};

void CricketGame::playGame() {
    srand (time(0));  // Initialize random seed
    
    if(toss()) {
        firstInning = decideFirstIning(1);
    } else {
        firstInning = decideFirstIning(2);
    }

    if(firstInning==1) {
        cout << "\n You are Supposed to bat ";
        firstInningBatting = batting();
        cout << "\n Congrats You have scored  " << firstInningBatting << " \n Now its time to ball ";
        secondInningBalling = balling(firstInningBatting);
        cout << "\n The opponent scored " << secondInningBalling;

        if(firstInningBatting > secondInningBalling) {
            cout << "You successfully defended ";
        } else {
            cout << "Better luck again \n you couldn't defend ";
        }
    } else {
        cout << "\n You are supposed to ball";
        firstInningBalling = balling();
        cout << "\n You have restricted the opposition at " << firstInningBalling << " runs \n Now its time to chase ";
        secondInningBatting = batting(firstInningBalling);
        cout << "\n The 2nd innging scored " << secondInningBatting;
        
        if(firstInningBalling < secondInningBatting) {
            cout << "\n Congrats, You had successfully chase ";
        } else {
            cout << "\n Sorry you had a bad Chase ";
        }
    }
}

int CricketGame::random() {
    return rand();
}

int CricketGame::batting() {
    int ballRanVar;
    int sum=0;
    int userInput;
    while(true) {
        ballRanVar=(random()% 6)+1;
        cout<<"\n Enter Input ";
        cin>>userInput;
        if(userInput==ballRanVar) {
            break;
        } else {
            sum=sum + userInput;
        }
    }
    return sum;
}

int CricketGame::balling() {
    int batRanVar;
    int sum=0;
    int userInput;
    while(true) {
        batRanVar=(random()% 6)+1;
        cout<<"\n Enter Input ";
        cin>>userInput;
        if(userInput==batRanVar) {
            cout<<"How was That !!!! ";
            break;
        } else {
            sum=sum + batRanVar;
            cout<<"\n Batsman score "<<batRanVar<<endl;
        }
    }
    return sum;
}

int CricketGame::decideFirstIning(int tossResult) {
    int FirstIningFinal;
    if(tossResult==1) {
        cout<<"Congratulation You have won the toss \n What do you want to do \n Enter 1 to bat & 2 to ball  ";
        cin>>FirstIningFinal;
        return FirstIningFinal;
    } else {
        FirstIningFinal= random();
        FirstIningFinal= (FirstIningFinal%2)+1;
        return FirstIningFinal;
    }
}

bool CricketGame::toss() {
    int tossRanVar= random();
    tossRanVar= (tossRanVar%2)+1;

    int tossInput;
    cout<<"Enter 1 for Heads and 2 for Tails ";
    cin>>tossInput;
    return tossInput==tossRanVar;
}

int CricketGame::batting(int firstIningTotal) {
    int target = firstIningTotal + 1;
    int ballRanVar;
    int sum=0;
    int userInput;
    while(target>=0) {
        ballRanVar=(random()% 6)+1;
        cout<<"\n Enter Input ";
        cin>>userInput;
        if(userInput==ballRanVar) {
            break;
        } else {
            target -= userInput;
            sum += userInput;
        }
    }
    return sum;
}

int CricketGame::balling(int firstIningTotal) {
    int target = firstIningTotal + 1;
    int batRanVar;
    int sum=0;
    int userInput;
    while(target>=0) {
        batRanVar=(random()% 6)+1;
        cout<<"\n Enter Input ";
        cin>>userInput;
        if(userInput==batRanVar) {
            break;
        } else {
            cout<<"\n Batsman Scored "<<batRanVar<<endl;
            target -= batRanVar;
            sum += batRanVar;
        }
    }
    return sum;
}

int main() {
    CricketGame game;
    game.playGame();
    
    return 0;
}
