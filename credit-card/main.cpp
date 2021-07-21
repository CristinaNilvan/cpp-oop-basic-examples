#include <iostream>
#include <string>

using namespace std;

class Card {
    string name;
    float amountOfMoney;
    int securityCode;
    string bankCurrency = "ron";

public:
    Card() {
        name = "";
        amountOfMoney = 0;
        securityCode = 0;
    }

    Card(string givenName, float givenAmountOfMoney, int givenSecurityCode) {
        name = move(givenName);
        amountOfMoney = givenAmountOfMoney;
        securityCode = givenSecurityCode;
    }

    bool checkSecurityCode(int givenSecurityCode) const {
        if (securityCode != 0) {
            if (securityCode == givenSecurityCode)
                return true;
            else
                return false;
        }

        return false;
    }

    float getAmountOfMoney(int givenSecurityCode) const {
        if (checkSecurityCode(givenSecurityCode))
            return amountOfMoney;

        return 0;
    }

    void cashDeposit(float givenAmountOfMoney, int givenSecurityCode) {
        if (checkSecurityCode(givenSecurityCode))
            amountOfMoney += givenAmountOfMoney;
    }

    void cashWithdrawal(float givenAmountOfMoney, int givenSecurityCode) {
        if (checkSecurityCode(givenSecurityCode))
            amountOfMoney -= givenAmountOfMoney;
    }

    void cardDetails(int givenSecurityCode) {
        if (checkSecurityCode(givenSecurityCode)) {
            cout << "Name : " << name << endl;
            cout << "Cash : " << amountOfMoney << " " << bankCurrency;
        }
    }

    void interrogateSold(int givenSecurityCode) const {
        if (checkSecurityCode(givenSecurityCode))
            cout << "Cash : "  << getAmountOfMoney(givenSecurityCode) << endl;
    }

    void cardOperations(const string& operationType, float givenAmountOfMoney, int givenSecurityCode) {
        if (operationType == "deposit")
            cashDeposit(givenAmountOfMoney, givenSecurityCode);

        if (operationType == "withdrawal")
            cashWithdrawal(givenAmountOfMoney, givenSecurityCode);
    }
};

int main() {
    Card myCard("Amy Jonson", 400, 1234);

    myCard.interrogateSold(1234);
    myCard.cardOperations("deposit", 50, 1234);
    myCard.interrogateSold(1234);
    myCard.cardOperations("withdrawal", 30, 1234);
    myCard.interrogateSold(1234);

    return 0;
}
