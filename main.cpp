#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
bool toss();
int random ();
int decideFirstIning(int a);
int tossResult();
int batting ();
int balling();
int batting(int firstIningTotal);
int balling(int firstIningTotal);
int main ()
{
int result;
int ranVar, firstInning,secondInning,firstInningBatting,firstInningBalling,secondInningBatting,secondInningBalling;
 if(toss())
    {
         firstInning = decideFirstIning(1);
    }

    else
        {
             firstInning = decideFirstIning(2);
        }

if(firstInning==1)
        {
            cout<<"\n You are Supposed to bat ";
            firstInningBatting=batting();
            cout<<"\n Congrats You have scored  "<<firstInningBatting<<" \n runs \n Now its time to ball ";
            secondInningBalling=balling(firstInningBatting);
            cout<<"\n The opponent scored "<<secondInningBalling;

            if(firstInningBatting>secondInningBalling)
            {
                cout<<"You successfully defended ";
            }
            else
                cout<<"Better luck again \n you could't defend ";

        }
    else
    {
        cout<<"\n You are supposed to ball";
        firstInningBalling=balling();
        cout<<"\n You have restricted the opposition at "<<firstInningBalling<<" runs \n Now its time to chase ";
        secondInningBatting=batting(firstInningBalling);
        cout<<"\n The 2nd innging scored "<<secondInningBatting;
        if(firstInningBalling<secondInningBatting)
        {
            cout<<"\n Congrats, You had successfully chase ";
        }
        else
            cout<<"\n Sorry you had a bad Chase ";
    }




    return 0;
}

int random ()
    {
    int ranVar;
    srand (time(0));
    ranVar = rand ();
    return ranVar;
    }

    int batting()
    {
        int ballRanVar;
        int sum=0;
        int userInput;
        srand ((time(NULL)));
            while(3)
            {
             ballRanVar=((rand()% 6)+1);
             cout<<"\n Enter Input ";
             cin>>userInput;
             if(userInput==ballRanVar)
             {
                 break;
             }
             else
             {
                 sum=sum + userInput;
             }
            }
      return sum;
    }

   int balling()
    {
        int batRanVar;
        int sum=0;
        int userInput;
        srand ((time(NULL)));
            while(3)
            {
             batRanVar=((rand()% 6)+1);
             cout<<"\n Enter Input ";
             cin>>userInput;
             if(userInput==batRanVar)
             {
                cout<<"How was That !!!! ";
                 break;

             }
             else
             {
                 sum=sum + batRanVar;
                 cout<<"\n Batsman score "<<batRanVar<<endl;
             }
            }
      return sum;
    }
int decideFirstIning(int tossResult)
        {
            int FirstIningFinal;
            if(tossResult==1)
                {
                    cout<<"Congratulation You have won the toss \n What do you want to do \n Enter 1 to bat & 2 to ball  ";
                    cin>>FirstIningFinal;
                    return FirstIningFinal;
                }
            else
                {
                int FirstIningFinal= random();
                FirstIningFinal= ((FirstIningFinal%2)+1);
                return FirstIningFinal;
                }
        }
bool toss()
        {
            int tossRanVar= random();
            tossRanVar= ((tossRanVar%2)+1);

            int tossInput;
            cout<<"Enter 1 for Heads and 2 for Tails ";
            cin>>tossInput;
            if(tossInput==tossRanVar)
                return true;
            else
                return false;
        }

int batting(int firstIningTotal)
        {
            int target = firstIningTotal + 1;
            int ballRanVar;
            int userInput;
            int sum=0;
            srand ((time(NULL)));
            while(target>=0)
            {
             ballRanVar=((rand()% 6)+1);
             cout<<"\n Enter Input ";
             cin>>userInput;
             if(userInput==ballRanVar)
             {
                 break;
             }
             else
             {
            target= target - userInput;
             sum=sum + userInput;
             }

            }
            return sum;

        }
int balling (int firstIningTotal)
        {
            int target = firstIningTotal + 1;
            int batRanVar;
            int userInput;
            int sum=0;
            srand ((time(NULL)));
            while(target>=0)
            {
             batRanVar=((rand()% 6)+1);
             cout<<"\n Enter Input ";
             cin>>userInput;
              if(userInput==batRanVar)
             {
                 break;
             }
             else
                {
             cout<<"\n Batsman Scored "<<batRanVar<<endl;
             target= target - batRanVar;
             sum=sum + batRanVar;
                }

            }
            return sum;
        }
