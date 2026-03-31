Simple Interview Definition :-
Encapsulation is the process of wrapping data (variables) and functions (methods) into a single unit (class) 
and restricting direct access to the data.

#include <iostream>
using namespace std;

class bank{
    private:
    int balance;

    public:
    void setBalance(int bal){
        balance = bal;
    }

    int getBalance(){
        return balance;
    }
};


int main(){
    bank b1;
    b1.setBalance(5000);
    cout<<b1.getBalance();
}
