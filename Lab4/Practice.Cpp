#include <iostream>
#include <string>

using namespace std;

class wallet {
    private:
        string OwnerName;
        double totalBalance;
        string TransactionHistory;

    public:
        wallet() {};
        wallet(string Name) {
            OwnerName = Name;
            totalBalance = 0;
            TransactionHistory = "";
        }
        void addMoney(){
            
        }
    
}
int main() {

    return 0;
}