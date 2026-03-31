Abstraction means hiding internal implementation details and showing only the essential features to the user.

#include <iostream>
using namespace std;

class ATM{
public:
    void withdraw(){
        cout<<"money withdraw"<<endl;
    }
};

int main(){
    ATM a;
    a.withdraw();
}
