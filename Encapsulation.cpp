
/* Program to demonstrate encapsulation in C++
   Written by Alex Mwangi
   Bachelor of Software Engineering Y1S2
 */
 
#include <bits/stdc++.h>
using namespace std;

// Creating of a class called BankAccount
class BankAccount{
    private: // Private access modifire
        string accountHolder;
        double balance;
        
    public: // Public access modifire 
        // Setter function for accountHolder
        void setaccountHolder(string holder){
            accountHolder = holder;
        }
        // Getter function for accountHolder
        string getaccountHolder(){
            return accountHolder;
        }
        // Setter function for balance
        void setbalance(double bal){
            balance = bal;
        }
        // Getter function for balance
        double getbalance(){
            return balance;
        }
};
// Main function
int main()
{
    // Creating an object A1 and setting its accountHolder and outputting it 
    BankAccount A1;
    A1.setaccountHolder("Dean Winchester");
    cout<< "The accountHolder is: "<< A1.getaccountHolder()<<endl;
    
    // Setting the object's balance and outputting it
    A1.setbalance(2000);
    cout<< "The balance is: "<< A1.getbalance()<< endl;

    return 0;
}// End of program