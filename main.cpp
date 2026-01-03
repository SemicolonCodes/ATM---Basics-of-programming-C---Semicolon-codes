#include <iostream>

using namespace std;

int main()
{
    int pass = 1234 , balance = 5000 , choice , Withdraw ,deposit ;
    cout << "Enter your PIN : ";
    cin >> pass ;

    if(pass == 1234){
        cout << "Welcome Ahmed \n\n";
        do{
             cout << "Choose you operation \n" << " 1 - Withdrawal \n 2 -  deposit \n 3 - check balance \n 4 - Exit \n";
             cin >> choice ;

            switch(choice){
                case 1 : {
                    cout << "Enter the amount  :  ";
                    cin >> Withdraw;
                    while(Withdraw >= balance){
                        if(Withdraw <= balance){
                            balance -= Withdraw ;
                            cout << "the amount will be transformed now. \n " << "your balance will be : " << balance <<endl;
                            break;
                        }else {
                            cout << "your current balance " << balance << endl ;
                            cout << "Enter the amount  :  ";
                            cin>> Withdraw;
                            if(Withdraw <= balance){
                                balance -= Withdraw ;
                                cout << "the amount will be transformed now. \n " << "your balance will be : " << balance <<endl;
                            break;
                            }
                        }
                    }
                }
                break;

                case 2 : {
                    cout << "Enter your money : ";
                    cin >> deposit ; // 50000

                    if(deposit <= 0){
                        while(deposit <= 0){
                            cout << "Enter a Valid Money "<< endl;
                            cin >> deposit ; // 80000
                        }
                        balance += deposit ;
                        cout << "balance now is " << balance << endl;
                    }
                    else{
                        balance += deposit ;
                        cout << "balance now is " << balance << endl;
                    }
                }
                break;


                case 3 : cout << "your balance now is  " << balance << endl ;
                break;

                case 4 : cout << " hold your card \n ";
                break ;

                default : cout << "Valid choice   \n \n ";

            }
        }while(choice != 4 );


    }else {
        cout << "Error , Please got out your card";

    }




}
